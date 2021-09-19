#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int a,b;cin>>a>>b;
    if(a==0&&b>0){cout << "Silver"<<endl;return 0;}
    if(a>0 && b==0){cout << "Gold" << endl;return 0;}
    cout << "Alloy" << endl;
    return 0;
}