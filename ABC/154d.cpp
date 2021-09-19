#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;cin>>N>>K;
    vector<double>acc(N);
    vector<double>ex(N);
    double tmp = 0.0;
    rep(i,N){
        double p;cin>>p;
        ex[i] = (p+1.0)/2;
        tmp += ex[i];
        acc[i] = tmp;
    }

    double max_ = acc[K-1];

    for(int i=1;i<N-K+1;++i){
        max_ = max(max_, acc[i+K-1] - acc[i-1]);
    }

    printf("%.10lf\n", max_);

    return 0;
}