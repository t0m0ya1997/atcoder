#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    map<pair<string, string>, int>mp;
    rep(i,N){
        string s,t;cin>>s>>t;
        mp[make_pair(s,t)]++;
    }
    for(auto [k,v]:mp){
        if(v>=2){cout << "Yes" << endl;return 0;}
    }
    cout << "No" << endl;
    return 0;
}