#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int H,W,K;cin>>H>>W>>K;
    vector<string>S(H);
    rep(i,H)cin>>S[i];
    int ans = 0;
    for(int h=0;h<(1<<H);++h){
        for(int w=0;w<(1<<W);++w){
            int k=0;
            for(int i=0;i<H;++i){
                for(int j=0;j<W;++j){
                    if(S[i][j]=='#' && (!(h&(1<<i)) && (!(w&(1<<j))))){
                        k++;
                    }
                }
            }
            if(K==k)ans++;
        }
    }
    cout << ans << endl;
    return 0;
}