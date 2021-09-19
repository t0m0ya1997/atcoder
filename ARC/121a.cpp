#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long

bool compare_by_y(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

bool compare_by_x(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }
}

int dist(pair<ll, ll>x, pair<ll, ll>y){
    return max(abs(x.first-y.first),abs(x.second-y.second));
}

int main(){
    int N;cin>>N;
    vector<pair<ll, ll>>p(N), q(N);
    rep(i,N){cin>>p[i].first>>p[i].second;q[i].first=p[i].second;q[i].second=p[i].first;}
    
    set<pair<ll, ll>>s;
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());

    for(int i=0;i<50;++i){
        if(i<(int)p.size())s.insert(p[i]);
        if(i<(int)q.size())s.insert(q[i]);
        if(N-i>=0)s.insert(p[N-i]);
        if(N-i>=0)s.insert(q[N-i]);
    }

    vector<pair<ll, ll>>ss(s.begin(), s.end());
    int size = (int)ss.size();

    vector<ll>d;
    for(int i=0;i<size-1;++i){
        for(int j=i+1;j<size;++j){
            d.emplace_back(dist(ss[i], ss[j]));
        }
    }
    sort(d.begin(), d.end());
    cout << d[(int)d.size()-2] << endl;
    return 0;
}