#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    vector<string>A(N),a(M);
    rep(i,N)cin>>A[i];
    rep(i,M)cin>>a[i];
    int lim = N-M+1;
    if(M==1)lim = N;
    for(int i=0;i<lim;++i){
        for(int j=0;j<lim;++j){
            bool can = true;
            for(int k=0;k<M;++k){
                for(int l=0;l<M;++l){
                    if(a[k][l]!=A[i+k][j+l])can=false;
                }
            }
            if(can){cout << "Yes" << endl;return 0;}
        }
    }
    cout << "No" << endl;
    return 0;
}