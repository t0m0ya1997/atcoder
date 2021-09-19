#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int a,b,c;cin>>a>>b>>c;
    if(a==b){cout << "=" << endl;return 0;}
    if(abs(a)==abs(b) && (c%2)==0){cout << "=" << endl;return 0;}
    if(c%2==0){
        if(abs(a)>abs(b))cout << ">" << endl;
        else cout << "<" << endl;
    }
    else{
        if(a>b)cout << ">" << endl;
        else cout << "<" << endl;
    }
    return 0;
}