#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll N;cin>>N;
    string ans = "";
    while(N>0){
        if(N%2==1)ans += 'A';
        if(N/2>0){ans += 'B';N/=2;}
        else break;
    }
    reverse(ans.begin(), ans.end());

    cout << ans << endl;
    return 0;
}