#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    double inv = 1.0;

    for(int i=N-1;i>0;--i){
        inv *= (double)i/(double)N;
    }

    printf("%.10lf\n", 1.0/inv);
    return 0;
}