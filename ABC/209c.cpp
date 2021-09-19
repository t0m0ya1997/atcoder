#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define MOD (ll)1000000007
int main(){
    int N;cin>>N;
    vector<int>C(N);
    rep(i,N)cin>>C[i];
    sort(C.begin(), C.end());
    ll ans = 1LL;
    rep(i,N){
        ans *= max(0LL, (ll)(C[i] - i));
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}