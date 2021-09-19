#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    vector<vector<ll>>A(N, vector<ll>(M));
    rep(i,N)rep(j,M)cin>>A[i][j];
    ll max_ = 0;
    if(M==1){
        ll sum = 0;
        for(int i=0;i<N;++i){
            sum += A[i][0];
        }
        cout << sum << endl;
        return 0;
    }
    for(int i=0;i<M-1;++i){
        for(int j=i+1;j<M;++j){
            ll tmp = 0;
            for(int k=0;k<N;++k){
                tmp += max(A[k][i], A[k][j]);
            }
            max_ = max(max_, tmp);
        }
    }

    cout << max_ << endl;
    return 0;
}