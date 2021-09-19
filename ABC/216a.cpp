#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;cin>>s;
    int size=s.size();
    int y = (int)(s[size-1]-'0');
    if(s.size()==4)cout << s[0]<<s[1];
    else cout << s[0];
    if(0<=y && y<=2){cout << '-' << endl;return 0;}
    if(3<=y && y<=6){cout << endl;return 0;}
    if(7<=y && y<=9){cout << '+' << endl;return 0;}
    return 0;
}