#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int W,H,N;cin>>W>>H>>N;
    vector<int>p(4);
    p[0]=0;p[1]=W;p[2]=0;p[3]=H;
    rep(i, N){
        int x,y,a;cin>>x>>y>>a;
        if(a==1)p[a-1] = max(p[a-1], x);
        if(a==2)p[a-1] = min(p[a-1], x);
        if(a==3)p[a-1] = max(p[a-1], y);
        if(a==4)p[a-1] = min(p[a-1], y);
    }

    cout << max(0, p[1]-p[0]) * max(0, p[3]-p[2]) << endl;
    return 0;
}