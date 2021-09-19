#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int L;cin>>L;
    ll dp[12][L+1];
    rep(i,12)dp[i][0] = 0LL;
    rep1(i,L)dp[0][i]=1LL;

    for(int i=1;i<=11;++i){
        for(int j=1;j<=L;++j){
            dp[i][j] = 0LL;
            for(int k=0;k<=j;++k){
                dp[i][j] += dp[i-1][j-k];
            }
        }
    }

    cout << dp[11][L] << endl;

    rep1(i,11){
        rep1(j,L){
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}