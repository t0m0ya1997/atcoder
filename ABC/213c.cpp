#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int H,W,N;cin>>H>>W>>N;
    set<int>h,w;
    vector<pair<int, int>>P(N);
    rep(i,N){
        cin>>P[i].first>>P[i].second;
        h.insert(P[i].first);
        w.insert(P[i].second);
    }
    vector<int>h_(h.begin(), h.end()), w_(w.begin(), w.end());
    sort(h_.begin(), h_.end());sort(w_.begin(), w_.end());

    rep(i,N){
        int x=P[i].first,y=P[i].second;
        int ah = lower_bound(h_.begin(), h_.end(), x) - h_.begin();
        int aw = lower_bound(w_.begin(), w_.end(), y) - w_.begin();
        ++ah;++aw;
        cout << ah << " " << aw << endl;
    }
    return 0;
}