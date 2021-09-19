#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll X,Y,A,B;
    cin>>X>>Y>>A>>B;
    ll ans = 0;
    while(1){
        if(Y/A < X)break;
        if(A * X >= Y)break;
        if(A*X >= X + B)break;
        X*=A;
        ++ans;
    }
    ans += (Y-X-1)/B;
    cout << ans << endl;
    return 0;
}