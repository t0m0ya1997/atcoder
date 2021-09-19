#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<pair<ll, ll>>p(N);
    rep(i,N)cin>>p[i].second>>p[i].first;
    sort(p.begin(), p.end());

    ll sum = 0;
    rep(i,N){
        sum+=p[i].second;
        if(sum>p[i].first){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}