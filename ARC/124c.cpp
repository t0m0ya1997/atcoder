#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    ll red, blue;
    vector<ll>a_(N),b_(N);
    rep(i,N){
        ll a,b;cin>>a>>b;
        a_[i]=a;b_[i]=b;
        if(i==0){red = a;blue = b;continue;}

        ll A = __gcd(red, a),B = __gcd(red, b),C = __gcd(blue, b),D=__gcd(blue, a);
        if(min(__gcd(red, a), __gcd(red, b)) > min(__gcd(blue, b), __gcd(blue, a))){
            red = __gcd(red,a);
            blue = __gcd(blue,b);
        }
        else{
            red = __gcd(red, b);
            blue = __gcd(blue, a);
        }
    }
    ll ans = lcm(red, blue);

    cout << ans << endl;
    return 0;
}