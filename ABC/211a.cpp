#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    double a,b;cin>>a>>b;
    double ans = (a-b)/3 + b;
    printf("%.10lf\n", ans);
    return 0;
}