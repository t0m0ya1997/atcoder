#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long

ll a,b,x;

bool check(ll n){
    ll y = a * n + b * (ll)to_string(n).size();
    return y <= x;
}

int main(){
    cin>>a>>b>>x;
    ll l = 0LL, r=1000000001LL;
    ll mid = (l+r)/2;
    while(1){
        if(check(mid)){l = mid;}
        else{r = mid;}
        mid = (l+r)/2;
        if(l==r || l==mid)break;
    }
    cout << mid << endl;
    return 0;
}