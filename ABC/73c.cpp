#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    map<ll, int>mp;
    rep(i,N){
        ll a;cin>>a;
        if((mp.count(a)==0) || mp[a]==0)mp[a]=1;
        else mp[a]=0;
    }
    int ans = 0;
    for(const auto& [key, value]:mp){
        ans += value;
    }
    cout << ans << endl;
    return 0;
}