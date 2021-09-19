#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll unsigned long long
int main(){
    ll a,c;int b;cin>>a>>b>>c;
    ll c_ =1;
    for(int i=0;i<b;++i){c_*=c;}
    if(a<c_)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}