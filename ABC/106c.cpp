#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;cin>>s;
    ll K;cin>>K;
    ll num_1 = 0;
    rep(i, (int)s.size()){
        if(s[i]=='1')num_1++;
        else break;
    }
    if(num_1==0){cout << s[0] << endl;return 0;}
    else if(K <= num_1){cout << 1 << endl;return 0;}
    else{cout << s[num_1] << endl;return 0;}
    return 0;
}