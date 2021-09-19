#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll N;cin>>N;
    string ans = "";
    while(N>0){
        --N;
        ans += (char)('a'+(N%26));
        N/=26;
    }
    reverse(ans.begin(), ans.end());

    cout << ans << endl;
    return 0;
}