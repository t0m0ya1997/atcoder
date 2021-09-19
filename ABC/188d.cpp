#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;ll C;cin>>N>>C;
    vector<pair<int, pair<int, ll>>>v;
    rep(i,N){
        pair<int, pair<int, ll>>p;
        cin>>p.first>>p.second.first>>p.second.second;
        v.emplace_back(p);
    }

    sort(v.begin(), v.end());

    ll sum = 0;

    for(int i=0;i<N-1;++i){
        
    }
    return 0;
}