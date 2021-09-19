#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll N,K;cin>>N>>K;
    ll ans = K * pow(K-1, N-1);
    cout << ans << endl;
    return 0;
}