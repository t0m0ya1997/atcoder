#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,Q;cin>>N>>Q;
    vector<int>A(N);rep(i,N)cin>>A[i];
    vector<int>Diff(N-1, 0);
    ll ans = 0LL;
    rep(i,N-1){
        Diff[i] = A[i+1]-A[i];
        ans += (ll)abs(Diff[i]);
    }

    rep(i,Q){
        int l,r,v;cin>>l>>r>>v;--l;--r;
        ll mae = abs(Diff[l-1]) + abs(Diff[r])
        if(r<N-1){

        }
    }
    return 0;
}