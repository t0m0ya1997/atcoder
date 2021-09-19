#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>o(N),t(N);
    int tmpo=0,tmpt=0;
    rep(i,N){
        int c,p;cin>>c>>p;
        if(c==1){tmpo+=p;}
        else{tmpt+=p;}
        o[i] = tmpo;t[i] = tmpt;
    }
    int Q;cin>>Q;
    rep(i,Q){
        int l,r;cin>>l>>r;--l;--r;
        int a,b;
        if(l==0){
            a = o[r];
            b = t[r];
        }
        else{
            a = o[r] - o[l-1];
            b = t[r] - t[l-1];
        }
        cout << a << " " << b << endl;
    }
    return 0;
}