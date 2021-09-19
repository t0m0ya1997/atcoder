#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll N;cin>>N;
    ll tmp = 1LL;
    int ans = 0;
    do{
        tmp*=2;
        ans++;
    }while(tmp<=N);

    cout << ans-1 << endl;
    return 0;
}