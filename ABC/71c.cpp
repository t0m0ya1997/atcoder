#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<ll>a(N);rep(i,N)cin>>a[i];
    sort(a.begin(), a.end(), greater<ll>());
    vector<ll>ans(0);
    ll before = a[0];
    for(int i=1;(i<=N-1)&&((int)ans.size()<2);++i){
        if(before == a[i]){
            ans.push_back(a[i]);
            ++i;
        }
        before = a[i];
    }

    if((int)ans.size()==0)cout << 0 << endl;
    else cout << ans[0] * ans[1] << endl;
    return 0;
}