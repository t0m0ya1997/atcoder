#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;cin>>N>>K;
    map<int, int>mp;
    rep(i,N){
        int a;cin>>a;
        mp[a]++;
    }
    vector<int>cnt;
    for(const auto&[k,v]:mp){
        cnt.emplace_back(v);
    }
    sort(cnt.begin(), cnt.end());
    int size = max(0, (int)cnt.size() - K);
    int ans = 0;
    rep(i, size){
        ans += cnt[i];
    }
    cout << ans << endl;
    return 0;
}