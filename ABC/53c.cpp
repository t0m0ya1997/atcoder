#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll x;cin>>x;
    ll ans = x / 11 * 2;
    ll res = x % 11;
    if(res>0&&res<=6)ans++;
    if(res>0&&res>6)ans+=2;
    cout << ans << endl;
    return 0;
}