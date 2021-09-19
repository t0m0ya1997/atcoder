#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
ll R,X,Y;
int main(){
    cin>>R>>X>>Y;
    R*=R;
    ll R2 = X*X+Y*Y;
    if(R2 == R){cout << 1 << endl;return 0;}
    if(R2 < R){cout << 2 << endl;return 0;}

    cout << (ll)ceil(sqrt((double)R2 / R)) << endl;

}