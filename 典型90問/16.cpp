#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    ll A,B,C,N;cin>>N>>A>>B>>C;
    int ans = 10000;
    for(int i=0;i<10000;++i){
        for(int j=0;i+j<10000;++j){
            ll res = N - A * i - B * j;
            if(res<0)continue;
            if(res % C == 0){
                ans = min(i + j + (int)(res/C), ans);
            }
        }
    }
    cout << ans << endl;
    return 0;
}