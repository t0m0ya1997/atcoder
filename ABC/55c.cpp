#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll N,M;cin>>N>>M;
    if(N>=M/2){cout << M/2 << endl;return 0;}
    else{
        cout << N + (M/2 - N) / 2 << endl;return 0;
    }
    return 0;
}