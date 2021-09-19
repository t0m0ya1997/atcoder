#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;ll K;cin>>N>>K;
    vector<pair<int, int>>V(N);
    rep(i,N)cin>>V[i].first>>V[i].second;
    sort(V.begin(), V.end());
    for(int i=0;i<N;++i){
        K-= 1LL * (ll)V[i].second;
        if(K<=0LL){cout << V[i].first << endl;return 0;}
    }
    return 0;
}