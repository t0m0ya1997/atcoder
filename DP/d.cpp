#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,W;cin>>N>>W;
    vector<ll>w(N),v(N);
    rep(i,N)cin>>w[i]>>v[i];

    vector<vector<ll>>dp(N+1, vector<ll>(W+1, 0));

    for(int i=1;i<=N;++i){
        for(int j=0;j<=W;++j){
            if(j - w[i-1] < 0){dp[i][j]=dp[i-1][j];}
            else{
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i-1]]+v[i-1]);
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}