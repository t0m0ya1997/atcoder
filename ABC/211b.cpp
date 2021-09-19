#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    map<string, int>mp;
    rep(i,4){
        string s;cin>>s;
        mp[s]++;
    }
    if((int)mp.size()==4)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}