#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define mod 10
int main(){
    int A,B,C;cin>>A>>B>>C;
    ll bc = B;
    int cnt = 1;
    while(cnt*2<C){
        B *= B;
        B %= mod;
        cnt *= 2;
    }
    int res = C-cnt;
    
    return 0;
}