#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
set<string>st = {"ABC", "ARC", "AHC", "AGC"};
int main(){
    rep(i,3){
        string s;cin>>s;
        st.erase(s);
    }

    for(auto x:st){
        cout << x << endl;
    }
    return 0;
}