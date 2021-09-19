#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>h(N);
    rep(i,N)cin>>h[i];
    vector<int>dp(N);
    rep(i,N){
        if(i==0){dp[i]=0;continue;}
        if(i==1){dp[i]=abs(h[i]-h[i-1]);continue;}
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout << dp[N-1] << endl;
    return 0;
}