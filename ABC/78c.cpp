#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    ll const_ = max(0LL, (ll)N-M) * 100;
    ll ans = (1900 * M + const_) * pow(2LL, M);
    cout << ans << endl;
    return 0;
}