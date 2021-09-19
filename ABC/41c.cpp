#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<pair<int, int>>p(N);
    rep1(i,N){
        cin>>p[i-1].first;
        p[i-1].first *= -1;
        p[i-1].second=i;
    }
    sort(p.begin(), p.end());
    for(auto x:p){
        cout << x.second << endl;
    }
    return 0;
}