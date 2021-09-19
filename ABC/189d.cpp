#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<string>s(N);
    rep(i,N)cin>>s[i];

    ll dp[N+1][2];
    dp[0][0]=1;dp[0][1]=1;

    rep(i, N){
        if(s[i]=="OR"){
            dp[i+1][0] = dp[i][0];
            dp[i+1][1] = 2*dp[i][1] + dp[i][0];
        }
        else{
            dp[i+1][0] = 2 * dp[i][0] + dp[i][1];
            dp[i+1][1] = dp[i][1];
        }
    }

    cout << dp[N][1] << endl;

    return 0;
}