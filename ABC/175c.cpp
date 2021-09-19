#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll X,K,D;cin>>X>>K>>D;
    X = abs(X);
    ll num = X / D;
    if(num >= K){
        ll ans = X - K * D;
        cout << ans << endl;
        return 0;
    }

    ll d = X - D * num;
    ll d_ = D - d;

    if((K - num)%2==0){
        cout << d << endl;
    }
    else{
        cout << d_ << endl;
    }
    
    return 0;
}