#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;ll P,Q;cin>>N>>P>>Q;
    vector<ll>A(N);
    rep(i,N){cin>>A[i];}

    ll cnt = 0;

    for(int i=0;i<N-4;++i){
        for(int j=i+1;j<N-3;++j){
            for(int k=j+1;k<N-2;++k){
                for(int l=k+1;l<N-1;++l){
                    for(int m=l+1;m<N;++m){
                        if(1LL * A[i]*A[j]%P*A[k]%P*A[l]%P*A[m]%P==Q)cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}