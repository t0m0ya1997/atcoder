#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int N,Q;
int main(){
    cin>>N>>Q;
    vector<vector<int>>to(N);
    rep(i,N-1){
        int a,b;cin>>a>>b;
        --a;--b;
        to[a].emplace_back(b);
        to[b].emplace_back(a);
    }
    const int INF = 1001001001;
    vector<int>dist(N,INF);
    queue<int>q;
    q.push(0);
    dist[0] = 0;
    while(q.size()){
        int v = q.front();q.pop();
        for(int u:to[v]){
            if(dist[u]!=INF)continue;
            dist[u] = dist[v] + 1;
            q.push(u);
        }
    }
    rep(i,Q){
        int c,d;cin>>c>>d;
        if((dist[c-1]+dist[d-1])%2==0)cout << "Town" << endl;
        else cout << "Road" << endl;
    }
    return 0;
}