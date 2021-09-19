#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    vector<int>p(26);
    rep(i,26)cin>>p[i];
    rep(i,26){
        cout << (char)('a'+(p[i]-1));
    }
    cout << endl;
    return 0;
}