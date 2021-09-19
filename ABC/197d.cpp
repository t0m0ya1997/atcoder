#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    double x0,y0,xh,yh;
    scanf("%lf %lf %lf %lf", &x0, &y0, &xh, &yh);
    double cx = (x0+xh)/2;
    double cy = (y0+yh)/2;
    x0-=cx;
    y0-=cy;

    double theta = 2.0 * M_PI * 1.0 / (double)N;
    double ax = x0*cos(theta) - y0*sin(theta) + cx;
    double ay = x0*sin(theta) + y0*cos(theta) + cy;
    printf("%.10lf %.10lf\n", ax, ay);

    return 0;
}