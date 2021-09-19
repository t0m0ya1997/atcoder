#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define mod (ll)1000000007
/* 繰り返し２乗法: 高速にa^b mod c を計算する */
int main(){
    ll N,K;cin>>N>>K;
    if(N==1){cout << K%mod << endl;return 0;}
    if(N==2){cout << ((K%mod)*((K-1)%mod))%mod << endl;return 0;}
    ll ans = (K*(K-1))%mod;
    ll ans_ = 0;
    N-=2;

    for(ll i=0LL;i<N;i*=2LL){
        
    }

    return 0;
}