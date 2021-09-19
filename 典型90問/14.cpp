#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>A(N),B(N);
    rep(i,N)cin>>A[i];
    rep(i,N)cin>>B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll sum = 0LL;

    rep(i,N){
        sum += 1LL * abs(A[i]-B[i]);
    }

    cout << sum << endl;
    return 0;
}