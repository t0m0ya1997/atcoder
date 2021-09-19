#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int s,t;
    cin>>s>>t;
    int ans = 0;
    for(int i=0;i<=s;++i){
        for(int j=0;i+j<=s;++j){
            for(int k=0;i+j+k<=s;++k){
                if(i*j*k<=t)++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}