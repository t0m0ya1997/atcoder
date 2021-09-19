#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    map<int, ll>a,b,c;
    ll ans = 0LL;
    rep(i,N){int t;cin>>t;a[t%46]++;}
    rep(i,N){int t;cin>>t;b[t%46]++;}
    rep(i,N){int t;cin>>t;c[t%46]++;}

    for(int i=0;i<46;++i){
        for(int j=0;j<46;++j){
            for(int k=0;k<46;++k){
                if((i+j+k)%46==0){
                    ans += a[i]*b[j]*c[k];
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}