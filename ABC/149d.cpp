#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;cin>>N>>K;
    ll R,S,P;cin>>R>>S>>P;
    string T;cin>>T;
    vector<ll>p={R,S,P};
    string h = "RSP";
    string w = "spr";

    ll dp[N+1][3];
    rep(i,3){dp[0][i] = 0;}
    rep1(i,K){
        rep(j, 3){
            dp[i][j] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));
            if(T[i-1]==w[j])dp[i][j]+=p[j];
        }
    }
    for(int i=K+1;i<=N;++i){
        rep(j, 3){
            if(K>1)dp[i][j] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));
            int i1 = (j+1)%3, i2 = (j+2)%3;
            dp[i][j] += max(dp[i-K][])
            if(T[i-1]==w[j])dp[i][j] += p[j];
        }
    }

    cout << max(dp[N][0], max(dp[N][1], dp[N][2])) << endl;
    return 0;
}