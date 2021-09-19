#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>a(N);
    rep(i,N)cin>>a[i];
    int ans = -1;
    for(int l=0;l<N;++l){
        int min_ = a[l];
        for(int r=l;r<N;++r){
            min_ = min(min_, a[r]);
            ans = max(ans, (r-l+1)*min_);
        }
    }

    cout << ans << endl;
    return 0;
}