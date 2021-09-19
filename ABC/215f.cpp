#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<pair<int, int>>p(N), q(N);
    set<pair<int, int>>st;
    rep(i,N){cin>>p[i].first>>p[i].second;q[i].first=p[i].second;q[i].second=p[i].first;}
    int max_ = -1;
    sort(p.begin(), p.end());
    rep(i, min(5000, N)){
        st.insert(p[i]);
    }
    for(int i=N-1;i>=max(0, N-5000);--i){
        st.insert(p[i]);
    }
    sort(q.begin(), q.end());
    rep(i, min(5000, N)){
        st.insert(q[i]);
    }
    for(int i=N-1;i>=max(0, N-5000);--i){
        st.insert(q[i]);
    }

    vector<pair<int, int>>st_(st.begin(),st.end());
    int N_ = (int)st_.size();

    for(int i=0;i<N_-1;++i){
        for(int j=i+1;j<N_;++j){
            max_ = max(max_, min(abs(st_[i].first-st_[j].first), abs(st_[i].second-st_[j].second)));
        }
    }

    cout << max_ << endl;
    return 0;
}