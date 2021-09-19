#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<pair<int, int>>p(N);
    rep(i,N)cin>>p[i].first>>p[i].second;
    sort(p.begin(), p.end());
    int ans = 0;
    rep(i,N)rep(j,N){
        if(p[i].first<p[j].first && p[i].second<p[j].second){
            bool f = binary_search(p.begin(), p.end(), make_pair(p[i].first, p[j].second));
            bool g = binary_search(p.begin(), p.end(), make_pair(p[j].first, p[i].second));
            if(f&&g)++ans;
        }
    }
    cout << ans << endl;
    return 0;
}