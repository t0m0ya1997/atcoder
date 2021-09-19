#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;cin>>s;
    int ans = 0;
    char before = s[0];
    rep1(i, (int)s.size()-1){
        if(before==s[i])continue;
        else{
            ans++;
            before = s[i];
        }
    }
    cout << ans << endl;
    return 0;
}