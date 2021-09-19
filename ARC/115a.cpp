#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    vector<vector<int>>S(N, vector<int>(M));
    rep(i,N){
        string s;cin>>s;
        rep(j,M){
            if(s[j]=='0')S[i][j]=0;
            else S[i][j]=1;
        }
    }

    for(int bit=0;bit<(1<<M);++bit){
        vector<int>ans(M,0);
        rep(i,M){
            if(bit & (1<<i))ans[i]=1;
        }
    }
    return 0;
}