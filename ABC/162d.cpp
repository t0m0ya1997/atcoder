#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    string s;cin>>s;
    map<char, vector<int>>mp;
    mp['R']=vector<int>(N,0);mp['B']=vector<int>(N,0);mp['G']=vector<int>(N,0);
    int r=0,g=0,b=0;
    rep(i,N){
        if(s[i]=='R')++r;if(s[i]=='G')++g;if(s[i]=='B')++b;
        mp['R'][i]=r;mp['G'][i]=g;mp['B'][i]=b;
    }
    ll cnt = 0;
    for(int i=0;i<N-2;++i){
        for(int j=i+1;j<N-1;++j){
            if(s[i]==s[j])continue;
            set<char>c={'R','G','B'};
            c.erase(s[i]);c.erase(s[j]);
            char res = *c.begin();
            cnt += mp[res][N-1] - mp[res][j];
            if(2*j-i<N && s[2*j-i]==res)cnt--;
        }
    }

    cout << cnt << endl;
    return 0;
}