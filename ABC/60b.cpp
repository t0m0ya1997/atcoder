#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int a,b,c;cin>>a>>b>>c;
    int tmp=0;
    for(int i=0;i<=b;++i){
        int res = (a*i)%b;
        if(res==c){cout << "YES" << endl;return 0;}
    }
    cout << "NO" << endl;
    return 0;
}