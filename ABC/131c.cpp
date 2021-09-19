#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll A,B,C,D;cin>>A>>B>>C>>D;
    ll sum = B-A+1;
    ll a1 = B/C - A/C;
    if(A%C==0)a1++;
    ll a2 = B/D - A/D;
    if(A%D==0)a2++;
    ll lc = lcm(C,D);
    ll a3 = B/lc - A/lc;
    if(A%lc==0)a3++;
    
    cout << sum - a1 - a2 + a3 << endl;
    
    return 0;
}