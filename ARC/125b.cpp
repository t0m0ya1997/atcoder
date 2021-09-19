#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define const (ll)998244353
int main(){
    ll N;cin>>N;
    ll ans = 0;

    for(ll i=1;i*i<=N;++i){
        ll sub = (N/i - i + 1)/2;
        if((N/i-i+1)%2==1 && ((N/i)%2 == i%2))sub++;
        ans += (sub%const);
        ans %= const;
    }

    cout << ans << endl;
    return 0;
}