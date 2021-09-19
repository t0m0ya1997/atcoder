#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int N,Q;
int main(){
    cin>>N;
    map<ll, ll>mp;
    ll sum = 0;
    rep(i,N){
        ll a;cin>>a;
        mp[a]++;
    }
    for(auto [k,v]:mp){
        sum += k * v;
    }
    cin>>Q;
    rep(i,Q){
        ll b,c;cin>>b>>c;
        if(mp[b]==0){cout << sum << endl;}
        else{
            sum = sum - b * mp[b] + c * mp[b];
            cout << sum << endl;
            mp[c] = mp[c] + mp[b];
            mp[b] = 0;
        }
    }

    return 0;
}