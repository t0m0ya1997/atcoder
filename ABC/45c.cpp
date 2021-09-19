#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;cin>>s;
    int n = (int)s.size()-1;
    ll ans = 0LL;
    for(int bit=0;bit<(1<<n);++bit){
        ll sum = 0;
        string t = s.substr(0, 1);
        for(int i=0;i<n;++i){
            if(bit&(1<<i)){
                sum += stoll(t);
                t = s.substr(i+1, 1);
            }
            else{
                t += s[i+1];
            }
        }
        ans += stoll(t);
        
        ans += sum;
    }

    cout << ans << endl;
    return 0;
}