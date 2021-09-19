#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int N;
int main(){
    cin>>N;
    ll tmp=0LL;
    vector<ll>acc(N);
    vector<ll>max_(N);
    rep(i,N){
        ll a;cin>>a;
        if(i==0)max_[i]=0LL;
        else max_[i] = max(max_[i-1], tmp);
        tmp+=a;
        acc[i]=tmp;
    }
    ll ans = max(0LL, acc[0]);
    ll tmp_ = acc[0];
    rep1(i,N-1){
        ll susp = tmp_ + max_[i-1];
        ll comp = tmp_ + acc[i];
        ans = max(ans, max(susp, comp));
        tmp_ += acc[i];
    }

    cout << ans << endl;
    return 0;
}