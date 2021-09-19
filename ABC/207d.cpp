#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<pair<double, double>>p(N), q(N);
    double cx=.0, cy=.0;
    rep(i,N){cin>>p[i].first>>p[i].second;cx+=p[i].first;cy+=p[i].second}
    cx/=N;cy/=N;
    rep(i,N){p[i].first-=cx;p[i].second-=cy;}
    cx=.0;cy =.0;
    rep(i,N){cin>>q[i].first>>q[i].second;cx+=q[i].first;cy+=q[i].second;}
    rep(i,N){q[i].first-=cx;q[i].second-=cy;}
    vector<double>distp(N), distq(N);
    rep(i,N){}
    return 0;
}