#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<ll>A(N);
    rep(i,N)cin>>A[i];
    sort(A.begin(), A.end(), greater<ll>());

    ll tmp = 0;
    ll ans = 0;

    rep(i,N-1){
        tmp += A[i];
        ans += tmp - (i+1)*A[i+1];
    }

    cout << ans << endl;
    return 0;
}