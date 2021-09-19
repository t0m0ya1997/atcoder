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

    vector<int>ans(N, -1);

    queue<int>q;
    q.push(0);

    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(int v:g[now]){
            if(ans[v]<0){
                ans[v] = now+1;
                q.push(v);
            }
        }
    }

    for(int v:ans){
        if(v<0){cout << "No" << endl;return 0;}
    }
    cout << "Yes" << endl;
    rep1(i,N-1){
        cout << ans[i] << endl;
    }
    return 0;
}