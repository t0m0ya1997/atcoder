#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
using Graph = vector<vector<int>>;
int main(){
    int N,M;cin>>N>>M;
    Graph g(N);
    rep(i,M){
        int a,b;cin>>a>>b;
        --a;--b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<bool>visit(N,false);
    int ans = 0;
    rep(i,N){
        if(visit[i])continue;
        set<int>s;
        queue<int>q;
        q.push(i);
        visit[i]=true;
        s.insert(i);
        while(!q.empty()){
            int v = q.front();
            q.pop();
            for(int u:g[v]){
                if(visit[u])continue;
                q.push(u);
                s.insert(u);
                visit[u]=true;
            }
        }
        ans = max(ans, (int)s.size());
    }

    cout << ans << endl;
    return 0;
}