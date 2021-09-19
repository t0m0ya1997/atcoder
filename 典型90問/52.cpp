#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define mod (ll)1000000007
int main(){
    int N;cin>>N;
    int A[6][N];
    rep(i,N)rep(j,6){
        cin>>A[j][i];
    }
    ll ans = 1LL;
    rep(i,N){
        ans *= (A[0][i]+A[1][i]+A[2][i]+A[3][i]+A[4][i]+A[5][i]);
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}