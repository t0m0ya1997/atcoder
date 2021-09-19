#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,K;
    cin>>N>>K;
    vector<bool>f(10, false);
    rep(i,K){
        int a;cin>>a;
        f[a]=true;
    }

    while(1){
        bool can = true;
        int N_ = N;
        while(N_>0){
            int k = N_%10;
            if(f[k]){can=false;break;}
            N_/=10;
        }
        if(can){cout << N << endl;return 0;}
        ++N;
    }
    return 0;
}