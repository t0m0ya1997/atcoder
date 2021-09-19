#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>a(N);rep(i,N)cin>>a[i];
    if(N==1){cout << a[0] << endl;return 0;}
    rep(i,N){
        int num = a[i];
        int m;
        for(int j=2;j<=num;++j){
            if((num%j)==0){
                m = j;break;
            }
        }
        a[i] = m;
    }
    int ans = 1;
    rep(i,N){
        ans = lcm(ans, a[i]);
    }

    cout << ans << endl;
    return 0;
}