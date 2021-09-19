#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define CONST (ll)1000000007
map<char, bool>mp;
string p = "chokudai";
string s;
int main(){
    cin>>s;
    int N = (int)s.size();

    ll dp[N+1][9];
    rep(i,9)dp[0][i]=0LL;
    rep(i,N+1)dp[i][0]=1LL;

    rep1(i,N){
        rep1(j,8){
            if(s[i-1]!=p[j-1]){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
            dp[i][j] %= CONST;
        }
    }
    cout << dp[N][8] << endl;
    return 0;
}