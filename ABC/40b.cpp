#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int n;cin>>n;
    int ans = 1001001001;
    for(int i=1;i*i<=n;++i){
        int res = n - (i * (n/i));
        int dif = abs((n/i) - i);
        ans = min(ans, res+dif);
    }
    cout << ans << endl;
    return 0;
}