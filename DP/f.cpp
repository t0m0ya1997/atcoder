#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s,t;cin>>s>>t;
    int ls = (int)s.size(), lt = (int)t.size();
    vector<vector<int>>dp(ls+1, vector<int>(lt+1, 0));

    for(int i=1;i<=ls;++i){
        for(int j=1;j<=lt;++j){
            if(s[i-1]!=t[j-1])dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            else{
                dp[i][j] = dp[i-1][j-1]+1;
            }
        }
    }

    string ans = "";
    
    int i = ls-1, j = lt-1;
    while(i>=0 && j>=0){
        if(s[i]==t[j]){
            i--;j--;
            ans+=s[i];
        }
        else{
            if(dp[i][j]==dp[i-1][j]){
                i--;
            }
            else{
                j--;
            }
        }
    }

    cout << ans << endl;
    return 0;
}