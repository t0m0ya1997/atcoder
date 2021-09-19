#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2 && c1==c2){cout << 0 << endl;return 0;}
    if(abs(r1-r2)+abs(c1-c2)<=3 || r1+c1==r2+c2 || r1-c1==r2-c2){cout << 1 << endl;return 0;}
    for(int i=-3;i<=3;++i){
        for(int j=-3;j<=3;++j){
            if(abs(i)+abs(j)>3)continue;
            if(abs(r1-r2+i)+abs(c1-c2+j)<=3 || r1+c1+i==r2+c2+j || r1-c1+i==r2-c2+j){cout << 2 << endl;return 0;}
        }
    }
    int s = abs(r1+c1), g=abs(r2+c2);
    int d = max(s,g) - min(s,g);
    if(d%2==0)cout << 2 << endl;
    else cout << 3 << endl;
    return 0;
}