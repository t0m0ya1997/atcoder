#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll N;cin>>N;
    int min_ = 100;
    for(ll i=1;i*i<=N;++i){
        if(N%i!=0)continue;
        min_ = min(min_, max((int)to_string(i).size(), (int)to_string(N/i).size()));
    }
    cout << min_ << endl;
    return 0;
}