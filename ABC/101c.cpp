#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;cin>>N>>K;
    int idx;
    rep(i,N){
        int a;cin>>a;
        if(a==1)idx=i;
    }
    int ans1 = idx/(K-1);
    int mod1 = idx%(K-1);
    if(mod1>0)++ans1;
    int ans2 = (N-idx-1)/(K-1);
    int mod2 = (N-idx-1)%(K-1);
    if(mod2>0)++ans2;

    int ans = ans1+ans2;
    if(mod1>0&&mod2>0&&(mod1+mod2)<K)--ans;
    cout << ans << endl;
    return 0;
}