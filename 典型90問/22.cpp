#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll a,b,c;cin>>a>>b>>c;
    ll g = __gcd(__gcd(a, b), c);
    ll ans = (a/g-1) + (b/g-1) + (c/g-1);
    cout << ans << endl;
    return 0;
}