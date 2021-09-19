#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int x;cin>>x;
    if(x<40)cout << 40-x << endl;
    else if(x < 70) cout << 70 - x << endl;
    else if(x<90) cout << 90-x << endl;
    else cout << "expert" << endl;
    return 0;
}