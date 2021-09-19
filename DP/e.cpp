#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define INF (int)1001001001
int main(){
    int N,W;cin>>N>>W;
    vector<int>w(N),v(N);
    int sumV=0;
    rep(i,N){cin>>w[i]>>v[i];sumV+=v[i];}

    vector<vector<int>>dp(N+1, vector<int>(sumV+1, INF));
    dp[0][0] = 0;

    for(int i=1;i<=N;++i){
        for(int j=0;j<sumV+1;++j){
            if(j-v[i-1]<0){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i-1]] + w[i-1]);
            }
        }
    }

    int ans = sumV;
    while(dp[N][ans]>W)ans--;
    cout << ans << endl;
    return 0;
}