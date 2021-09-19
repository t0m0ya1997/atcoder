#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<vector<int>>h(3, vector<int>(N));
    rep(i,N)cin>>h[0][i]>>h[1][i]>>h[2][i];
    vector<int>dp(3, 0);
    rep(i,N){
        vector<int>ndp(3);
        ndp[0] = max(dp[1], dp[2]) + h[0][i];
        ndp[1] = max(dp[0], dp[2]) + h[1][i];
        ndp[2] = max(dp[0], dp[1]) + h[2][i];
        dp = ndp;
    }
    cout << max(dp[0], max(dp[1], dp[2])) << endl;
    return 0;
}