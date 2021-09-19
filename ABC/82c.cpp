#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
map<ll, ll>mp;
int N;
ll a;
int main(){
    cin>>N;
    rep(i,N){
        cin>>a;
        mp[a]++;
    }
    ll ans = 0;
    for(const auto&[k, v]: mp){
        if(k>v)ans+=v;
        else ans += v-k;
    }
    cout << ans << endl;
    return 0;
}