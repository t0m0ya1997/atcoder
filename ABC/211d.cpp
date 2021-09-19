#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define CONST (int)1000000007
int N,M;
int a,b;
int main(){
    cin>>N>>M;
    vector<vector<int>>to(N);
    rep(i,M){
        cin>>a>>b;a--;b--;
        to[a].emplace_back(b);
        to[b].emplace_back(a);
    }
    int INF = 1001001001;
    vector<int>dist(N, INF);
    queue<int>q;
    dist[0]=0;
    q.push(0);

    vector<int>vs;
    while(q.size()){
        int now = q.front();q.pop();
        vs.emplace_back(now);
        for(auto x:to[now]){
            if(dist[x]!=INF)continue;
            dist[x] = dist[now] + 1;
            q.push(x);
        }
    }

    vector<int>dp(N,0);
    dp[0]=1;
    for(int v:vs){
        for(int u :to[v]){
            if(dist[u] == dist[v] + 1){
                (dp[u] += dp[v])%=CONST;
            }
        }
    }

    cout << dp[N-1] << endl;
    return 0;
}