#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define CONST (ll)998244353
int main(){
    int N,K;cin>>N>>K;
    vector<ll>count(N, 0LL);
    vector<bool>det(N, true);
    rep(i,K){
        char c;int k;cin>>c>>k;k--;
        det[k]=false;
        if(c=='L'){
            for(int i=k;i<N;++i){
                count[i]++;
            }
        }
        else{
            for(int i=k;i>=0;--i){
                count[i]++;
            }
        }
    }

    ll ans = 1;
    rep(i,N){
        if(det[i]){
            ans *= count[i];
            ans %= CONST;
        }
    }
    cout << ans << endl;
    return 0;
}