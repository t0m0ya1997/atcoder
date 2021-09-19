#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<ll>acc(N);
    ll tmp=0;
    rep(i,N){
        ll a;cin>>a;
        tmp+=a;
        acc[i]=tmp;
    }

    ll min_ = LONG_LONG_MAX;
    rep(i, N-1){
        min_ = min(min_, abs(acc[N-1] - 2 * acc[i]));
    }

    cout << min_ << endl;
    return 0;
}