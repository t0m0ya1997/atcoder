#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>s(N), t(N);
    
    vector<int>dp(N);
    int min_idx = -1;
    int min_ = 1001001001;

    rep(i,N)cin>>s[i];
    rep(i,N){cin>>t[i];}

    int time = 0;

    for(int i=0;i<N;++i){
        if(i==0)dp[i]=t[i];
        else{
            dp[i] = min(dp[i-1] + s[i-1], t[i]);
        }
    }

    for(int i=0;i<N;++i){
        if(i==0)dp[i] = min(dp[i], dp[N-1] + s[N-1]);
        else dp[i] = min(dp[i], dp[i-1] + s[i-1]);
    }

    rep(i,N){
        cout << dp[i] << endl;
    }

    return 0;
}