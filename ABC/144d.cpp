#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    double a,b,x;
    cin>>a>>b>>x;
    double half = 0.5 * a * a * b;
    double ans;
    if(x<half){
        ans = atan(a * b * b / 2 / x);
    }
    else{
        ans = atan((2 * b - 2 * x / (a * a))/a);
    }
    ans *= 180 / M_PI;
    printf("%.10lf\n", ans);
}