#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<ll>A(N);
    ll max_ = -1LL;
    ll sum = 0LL;
    rep(i,N){cin>>A[i];max_ = max(max_, A[i]);sum+=A[i];}
    rep(i,N){
        A[i] += max_;
        sum += max_;
        max_ = max(max_, A[i]);
        cout << sum << endl;
    }

    ll ans = 0LL;
    rep(i,N){
        ans += A[i];
    }
    return 0;
}