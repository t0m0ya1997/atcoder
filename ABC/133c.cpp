#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll L,R;cin>>L>>R;
    if(R-L+1>2019){
        cout << 0 << endl;
        return 0;
    }
    else{
        ll min_ = 2019 * 2019;
        for(ll i=L;i<R;++i){
            for(ll j=i+1;j<=R;++j){
                min_ = min(min_, (i*j)%2019);
            }
        }
        cout << min_ << endl;
    }
    return 0;
}