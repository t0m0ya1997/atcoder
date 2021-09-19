#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int ans = 0;
    int K,S;cin>>K>>S;
    rep(x, K+1)rep(y, K+1){
        if(S-(x+y)<=K && S-(x+y)>=0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}