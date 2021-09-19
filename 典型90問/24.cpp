#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;cin>>N>>K;
    vector<int>a(N),b(N);
    rep(i,N)cin>>a[i];rep(i,N)cin>>b[i];
    ll dif = 0;
    rep(i,N)dif+=abs(a[i]-b[i]);

    if(dif>K){cout << "No" << endl;return 0;}
    if((K-dif)%2==1){cout << "No" << endl;return 0;}
    else{
        cout << "Yes" << endl;
    }
    return 0;
}