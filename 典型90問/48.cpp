#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;cin>>N>>K;
    vector<ll>A(2*N);
    rep(i,N){cin>>A[i]>>A[i+N];A[i]-=A[i+N];}
    sort(A.begin(), A.end(), greater<ll>());
    ll ans = 0LL;
    rep(i,K){
        ans += A[i];
    }

    cout << ans << endl;
    return 0;
}