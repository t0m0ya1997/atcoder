#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll N;cin>>N;
    if(N==1){cout << 2 << endl;return 0;}
    while(N%2==0)N/=2;
    set<ll>s;
    for(ll i=1;i*i<=N;++i){
        if(N%i==0){s.insert(i);s.insert(N/i);}
    }
    cout << 2 * (int)s.size() << endl;
    return 0;
}