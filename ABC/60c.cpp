#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,T;
    cin>>N>>T;
    vector<int>t(N);rep(i,N)cin>>t[i];

    int ans = 0;

    for(int i=0;i<N-1;++i){
        if(t[i]+T>t[i+1])ans+=t[i+1]-t[i];
        else ans += T;
    }
    ans+=T;
    cout << ans << endl;
    return 0;
}