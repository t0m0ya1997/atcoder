#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int a,b;cin>>a>>b;
    rep(c, 256){
        if((a^c)==b){cout << c << endl;return 0;}
    }
    return 0;
}