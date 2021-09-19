#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,X,Y;cin>>N>>X>>Y;
    vector<int>A(N),B(N);
    rep(i,N)cin>>A[i]>>B[i];

    int INF = 1001001;
    int dp[N+1][X+1][Y+1];
    rep(i,N)dp[i][0][0] = 0;
    rep(i,X+1)rep(j,Y+1){
        dp[0][i][j] = INF;
    }
    dp[0][0][0] = 0;
    rep1(i,N){
        rep(j,X+1)rep(k,Y+1){
            dp[i][j][k] = min(dp[i-1][j][k], dp[i-1][max(0, j-A[i-1])][max(0, k-B[i-1])]+1);
        }
    }

    if(dp[N][X][Y]==INF)cout << -1 << endl;
    else cout << dp[N][X][Y] << endl;
    return 0;
}