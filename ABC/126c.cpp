#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;cin>>N>>K;
    int num = (int)ceil(log2(K));

    double ans = 0.0;

    rep1(i, N){
        int now = i;
        double prob = 1.0;
        while(now<K){
            now*=2;
            prob*=0.5;
        }
        ans += prob/N;
    }

    printf("%.11lf\n", ans);
    return 0;
}