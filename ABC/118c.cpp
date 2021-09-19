#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<ll>q(N);
    ll ans = 0;
    rep(i,N){
        ll a;
        if(i==0){cin>>ans;continue;}
        cin>>a;
        ans = __gcd(a, ans);
    }

    cout << ans << endl;


    return 0;
}