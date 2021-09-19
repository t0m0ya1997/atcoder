#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
string s,t;
int main(){
    cin>>s>>t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());

    if(s<t)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}