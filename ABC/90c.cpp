#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll N,M;cin>>N>>M;
    if(min(N,M)==1){
        cout << max(1LL, max(N,M) - 2) << endl;
        return 0;
    }
    ll ans = N*M - ((N+M)*2-4);
    cout << ans << endl;
    return 0;
}