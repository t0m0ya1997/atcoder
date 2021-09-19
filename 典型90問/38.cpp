#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long

int main(){
    ll A,B;cin>>A>>B;
    ll gcd = __gcd(A,B);
    if(B/gcd>(ll)1e18/A)cout << "Large" << endl;
    else cout << A * (B / gcd) << endl;
}