#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll a,b,x;cin>>a>>b>>x;
    ll ans = 0;
    if(x==1LL){
        cout << b - a + 1 << endl;
        return 0;
    }
    if(b%x==0)ans++;
    if(a%x==0)ans++;
    while(b>a){
        b/=x;
        ans++;
    }
    cout << ans << endl;
    return 0;
}