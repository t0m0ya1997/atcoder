#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
using Graph = vector<vector<int>>;
int main(){
    int N;cin>>N;
    vector<int>a(N);
    Graph g(N);
    rep(i,N)cin>>a[i];
    rep(i,N/2+1){
        g[a[i]].emplace_back(a[N-1-i]);
        g[a[N-1-i]].emplace_back(a[i]);
    }

    vector<bool>visit(200010,false);

    set<int>s(a.begin(), a.end());

    int ans = 0;
    for(int x:s){
        if(visit[x])continue;
        queue<int>q;
        int cnt = 0;
        q.push(x);
        visit[x]=true;
        while(!q.empty()){
            int v = q.front();
            cnt++;
            q.pop();
            for(int u:g[v]){
                if(visit[u])continue;
                q.push(u);
                visit[u]=true;
            }
        }
        ans += cnt - 1;
    }

    cout << ans << endl;
    return 0;
}