#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
const ll CONST = 1000000007;
ll powmod(ll n, ll m){
    ll res = 1;
    for(ll i=0;i<m;++i){
        res = res * n % CONST;
    }
    return res;
}
int main(){
    ll N;cin>>N;
    ll ans = powmod(10, N) - powmod(9, N) - powmod(9,N) + powmod(8,N);
    ans %= CONST;
    cout << (ans+CONST)%CONST << endl;
    return 0;
}