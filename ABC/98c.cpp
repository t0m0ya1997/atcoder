#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    string s;cin>>s;
    vector<int>E(N,0),W(N,0);
    int sumE=0, sumW=0;
    rep(i, N){
        if(s[N-i-1] == 'E'){sumE++;}
        if(s[i] == 'W'){sumW++;}
        E[N-i-1] = sumE;
        W[i] = sumW;
    }
    int min_ = 300001;
    rep(i,N){
        min_ = min(min_, E[i]+W[i]-1);
    }
    cout << min_ << endl;
    return 0;
}