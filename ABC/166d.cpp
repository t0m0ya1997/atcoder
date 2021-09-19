#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
ll X;
int main(){
    cin>>X;
    ll lim = (ll)ceil(pow((double)X, 0.5));
    for(ll i=-lim;i<=lim;++i){
        for(ll j=-lim;j<=lim;++j){
            ll x = i*i*i*i*i - j*j*j*j*j;
            if(x==X){cout << i << " " << j << endl;return 0;}
        }
    }
    return 0;
}