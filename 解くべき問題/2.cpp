#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int kosu(int N){
    int ans = 0;
    for(int i=1;i<=N;++i){
        if(N%i==0)ans++;
    }
    return ans;
}
int main(){
    int N;cin>>N;
    int ans = 0;
    for(int i=1;i<=N;i+=2){
        if(kosu(i)==8)ans++;
    }
    cout << ans << endl;
    return 0;
}