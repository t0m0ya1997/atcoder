#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int T;cin>>T;
    double L,X,Y;cin>>L>>X>>Y;
    int Q;cin>>Q;
    rep(i,Q){
        int e;cin>>e;
        double theta = 2.0 * M_PI * (double)(e % T) / T;
        double x=.0, y=-0.5*L*sin(theta), z=0.5 *L-0.5*L*cos(theta);
        double h=abs(z) , b=sqrt(X*X+(Y-y)*(Y-y));
        double ans = atan2(h, b);
        printf("%.10lf\n", ans * 180.0 / M_PI);
    }
    return 0;
}