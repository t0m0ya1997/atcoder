#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;cin>>N>>K;
    vector<int>C(N);
    rep(i,N)cin>>C[i];

    map<int, int>mp;
    rep(i,K)mp[C[i]]++;
    if(K==N){cout << (int)mp.size() << endl;return 0;}
    int max_ = (int)mp.size();
    for(int i=K;i<N;++i){
        int out = C[i-K];
        int in = C[i];
        if(mp[out]==1){mp.erase(out);}
        else{mp[out]--;}
        mp[in]++;
        max_ = max(max_, (int)mp.size());
    }

    cout << max_ << endl;
    return 0;
}