#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;ll X;cin>>N>>X;
    ll D;
    rep(i,N){
        ll a;cin>>a;
        if(i==0){D=abs(a-X);continue;}
        D = __gcd(D, abs(a-X));
    }

    cout << D << endl;
    return 0;
}