#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<ll>A(N);
    map<ll, ll>mp;
    rep(i,N){
        cin>>A[i];
        mp[A[i]]++;
    }
    ll S=0;
    for(auto [k,v]:mp){
        S += v * (v-1);
    }
    S/=2;

    rep(i, N){
        cout << S - (mp[A[i]]-1) << endl;
    }
    return 0;
}