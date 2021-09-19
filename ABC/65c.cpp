#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define CONST (ll)1000000007
int main(){
    ll N,M;cin>>N>>M;
    if(abs(N-M)>1){cout << 0 << endl;return 0;}
    ll ans = (N==M)?2:1;
    
    while(N>0){
        ans *= N;
        ans %= CONST;
        --N;
    }

    while(M>0){
        ans *= M;
        ans %= CONST;
        --M;
    }
    cout << ans << endl;
    return 0;
}