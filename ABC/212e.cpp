#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define CONST (ll)998244353
int main(){
    ll ans = 1;
    rep(i,50){
        ans *= 3;
        ans %= CONST;
    }
    cout << ans << endl;
    return 0;
}