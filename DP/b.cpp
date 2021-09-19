#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;cin>>N>>K;
    vector<int>h(N);
    rep(i,N)cin>>h[i];

    vector<int>dp(N);
    rep(i,N){
        if(i==0){dp[i]=0;continue;}
        int min_ = 1001001001;
        rep1(j, K){
            if(i-j<0)break;
            min_ = min(min_, dp[i-j]+abs(h[i]-h[i-j]));
        }
        dp[i] = min_;
    }
    cout << dp[N-1] << endl;
    return 0;
}