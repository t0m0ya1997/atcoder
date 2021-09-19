#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;N*=2;
    vector<ll>r,g,b;
    rep(i,N){
        ll a;char c;
        cin>>a>>c;
        if(c=='R')r.emplace_back(a);
        if(c=='G')g.emplace_back(a);
        if(c=='B')b.emplace_back(a);
    }
    if(((int)r.size()%2==0)&&((int)g.size()%2==0)&&((int)b.size()%2==0)){cout << 0 << endl;return 0;}
    
    int r_ = (int)r.size(), g_ = (int)g.size(), b_ = (int)b.size();
    sort(r.begin(), r.end());
    sort(g.begin(), g.end());
    sort(b.begin(), b.end());

    ll ans = 1001001001001001;
    // r,g
    rep(i, r_){
        ll tar = r[i];
        int idx = (int)(lower_bound(g.begin(), g.end(), tar) - g.begin());
        ans = min(ans, abs(tar - g[idx]));
        if(idx>=1)ans = min(ans, abs(tar - g[idx-1]));
    }
    // g,b
    rep(i, g_){
        ll tar = g[i];
        int idx = (int)(lower_bound(b.begin(), b.end(), tar) - b.begin());
        ans = min(ans, abs(tar - b[idx]));
        if(idx>=1)ans = min(ans, abs(tar - b[idx-1]));
    }
    // r,b
    rep(i, r_){
        ll tar = r[i];
        int idx = (int)(lower_bound(b.begin(), b.end(), tar) - b.begin());
        ans = min(ans, abs(tar - b[idx]));
        if(idx>=1)ans = min(ans, abs(tar - b[idx-1]));
    }
    cout << ans << endl;
    return 0;
}