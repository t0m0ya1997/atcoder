#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll n;cin>>n;
    ll f = (ll)floor(sqrt(2*(n+1)));
    while(f*(f+1)>2*(n+1))--f;
    cout << n - f + 1 << endl;
    return 0;
}