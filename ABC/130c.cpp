#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    double W,H,x,y;cin>>W>>H>>x>>y;
    double err = abs(W/2 - x) + abs(H/2 - y);

    double ans1 = W * H / 2;
    int ans2 = (err<1e-6)?1:0;
    printf("%.8lf %d\n", ans1, ans2);
    return 0;
}