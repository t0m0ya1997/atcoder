#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
ll A,B,N;
int main(){
    cin>>A>>B>>N;
    ll ans = 0;
    if(N<B-1){
        ans = (A * N) / B - A * (N/B);
    }
    else{
        ans = (A * (B-1)) / B - A * ((B-1)/B);
    }
    cout << ans << endl;
    return 0;
}