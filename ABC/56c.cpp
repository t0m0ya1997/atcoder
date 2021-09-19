#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int X;cin>>X;
    int now = 0;
    int turn = 1;
    while(X-now>0){
        now+=turn;
        ++turn;
    }
    cout << turn-1 << endl;
    return 0;
}