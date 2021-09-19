#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    vector<pair<int, int>>a(N), c(M);
    vector<int>ans(N);
    rep(i,N)cin>>a[i].first>>a[i].second;
    rep(i,M)cin>>c[i].first>>c[i].second;
    rep(i, N){
        int idx = -1;
        int min_ = 1000000000;
        rep(j, M){
            int dist = abs(a[i].first - c[j].first) + abs(a[i].second - c[j].second);
            if(min_ > dist){
                idx = j;
                min_ = dist;
            }
        }
        ans[i] = idx + 1;
    }

    for(auto x:ans){
        cout << x << endl;
    }
    return 0;
}