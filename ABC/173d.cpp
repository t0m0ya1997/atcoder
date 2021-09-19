#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>A(N);
    rep(i,N)cin>>A[i];
    sort(A.begin(), A.end(), greater<int>());
    ll ans = A[0];
    rep(i,N-2){
        ans += 1LL * A[i/2+1];
    }
    cout << ans << endl;
}