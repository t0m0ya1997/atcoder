#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long

ll diff_sum(ll N, ll num){
    if(num == 0LL)return 0;
    else return (N - num + 1) * (N + num - 1) / 2;
}

int main(){
    int N;ll K;cin>>N>>K;
    vector<ll>A(N);
    rep(i,N)cin>>A[i];
    sort(A.begin(), A.end(), greater<ll>());
    ll ans = 0LL;

    rep(i, N-1){
        if(K - (i+1) * (A[i] - A[i+1])>= 0){
            K -= (i+1) * (A[i] - A[i+1]);
            ans += (i+1) * diff_sum(A[i], A[i] - A[i+1]);
        }
    }
    
    return 0;
}