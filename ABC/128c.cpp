#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    vector<vector<int>>S(M);
    vector<int>P(M);
    rep(i,M){
        int k;cin>>k;
        rep(j,k){
            int a;cin>>a;--a;
            S[i].push_back(a);
        }
    }
    rep(i,M)cin>>P[i];
    int ans = 0;
    for(int bit=0;bit<(1<<N);++bit){
        bool can = true;
        rep(i, M){
            int num = 0;
            for(int j=0;j<(int)S[i].size();++j){
                if(bit & (1<<S[i][j]))++num;
            }
            if((num%2)!=P[i]){can=false;break;}
        }
        if(can)ans++;
    }

    cout << ans << endl;
    return 0;
}