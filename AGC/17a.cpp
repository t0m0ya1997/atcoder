#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,P;cin>>N>>P;
    int even=0, odd=0;
    rep(i,N){
        int a;cin>>a;
        if(a%2==0)even++;
        else odd++;
    }
    ll ans = 1LL*(ll)pow(2, even);
    
    return 0;
}