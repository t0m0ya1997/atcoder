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
        int a,b;cin>>a>>b;--a;--b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    rep(i,N){
        sort(g[i].begin(), g[i].end());
    }

    int ans = 0;

    rep1(i, N-1){
        int num = (int)(lower_bound(g[i].begin(), g[i].end(), i) - g[i].begin());
        if(num == 1)ans ++;
    }

    cout << ans << endl;
    return 0;
}