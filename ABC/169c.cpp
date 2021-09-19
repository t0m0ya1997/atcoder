#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll A,B;
    string b;
    cin>>A>>b;
    string b1,b2;
    b1 = b.substr(0, (int)b.size()-3);
    b2 = b.substr((int)b.size()-2, 2);
    B = 100LL * stoll(b1) + stoll(b2);
    cout << (A*B)/100LL << endl;
    return 0;
}