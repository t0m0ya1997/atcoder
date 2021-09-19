#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,L;cin>>N>>L;
    vector<string>s(N);rep(i,N)cin>>s[i];
    sort(s.begin(), s.end());
    for(auto x:s){
        cout << x;
    }
    cout << endl;
    return 0;
}