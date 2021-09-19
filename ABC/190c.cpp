#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int N,M,K;
int main(){
    cin>>N>>M;
    vector<pair<int, int>>C(M);
    rep(i,M){
        int c,d;cin>>c>>d;--c;--d;
        C[i] = make_pair(c,d);
    }
    cin>>K;
    vector<vector<int>>H(K, vector<int>(2));
    rep(i,K){
        int c,d;cin>>c>>d;--c;--d;
        H[i][0] = c;
        H[i][1] = d;
    }

    int max_ = 0;
    for(int bit = 0;bit < (1<<K);++bit){
        vector<bool>f(N, false);
        for(int i=0;i<K;++i){
            if(bit & (1<<i))f[H[i][0]] = true;
            else f[H[i][1]] = true;
        }
        int tmp = 0;
        for(int i=0;i<M;++i){
            if(f[C[i].first]&&f[C[i].second])++tmp;
        }
        max_ = max(max_, tmp);
    }

    cout << max_ << endl;

    return 0;
}