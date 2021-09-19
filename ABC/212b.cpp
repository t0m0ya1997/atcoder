#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int a,b,c,d;cin>>a;
    d = a%10;a/=10;
    c = a%10;a/=10;
    b = a%10;a/=10;
    if(a==b && b==c && c==d){cout << "Weak" << endl;return 0;}
    if(b==(a+1)%10 && c == (b+1)%10 && d==(c+1)%10){
        cout << "Weak" << endl;return 0;
    }
    cout << "Strong" << endl;
    return 0;
}