#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define CONST (ll)1000000007
int main(){
    int N,M;cin>>N>>M;
    vector<bool>no(N, false);
    rep(i,M){
        int a;cin>>a;
        no[a-1] = true;
    }

    vector<ll>dp(N, 0);
    dp[0] = no[0]?0:1;
    dp[1] = no[1]?0:dp[0]+1;
    for(int i=2;i<N;++i){
        if(no[i])dp[i]=0;
        else{
            dp[i] = dp[i-1] + dp[i-2];
            dp[i] %= CONST;
        }
    }
    cout << dp[N-1] << endl;
    return 0;
}