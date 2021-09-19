#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define CONST (ll)1000000007
int main(){
    int N;cin>>N;
    vector<ll>A(N);
    rep(i,N)cin>>A[i];

    if(N==1){cout << A[0] << endl;return 0;}

    vector<vector<pair<ll, ll>>>dp(N-1, vector<pair<ll, ll>>(2));

    dp[0][0].first = 1;dp[0][0].second = A[0]+A[1];
    dp[0][1].first = 1;dp[0][1].second = A[0]-A[1];

    for(int i=1;i<N-1;++i){
        dp[i][0].first = dp[i-1][0].first + dp[i-1][1].first;
        dp[i][1].first = dp[i-1][0].first;

        dp[i][0].first %= CONST;
        dp[i][1].first %= CONST;

        dp[i][0].second = dp[i-1][0].second + dp[i-1][1].second + dp[i][0].first * A[i+1];
        dp[i][1].second = dp[i-1][0].second - dp[i][1].first * A[i+1];

        dp[i][0].second = (dp[i][0].second+CONST)%CONST;
        dp[i][1].second = (dp[i][1].second+CONST)%CONST;
    }

    ll ans = (dp[N-2][0].second + dp[N-2][1].second + CONST)%CONST;

    cout << ans << endl;
    return 0;
}