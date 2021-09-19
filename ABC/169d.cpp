#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll N;cin>>N;
    ll N_ = N;
    ll cnt = 0;
    map<ll, ll>mp;
    if(N==1){cout << 0 << endl;return 0;}
    for(ll i=2;i*i<=N_;++i){
        ll ex=0;
        while(N%i==0){
            N/=i;
            ex++;
        }
        if(ex>0){
            mp[i]=ex;
        }
    }
    if(N>1)mp[N]=1;
    for(auto [k,v]:mp){
        ll num = v;
        ll c = 1;
        while(num>0){
            num -= c;
            if(num>=0){cnt++;}
            c++;
        }
    }
    cout << cnt << endl;
    return 0;
}