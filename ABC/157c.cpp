#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    int m = (int)pow(10,N);
    vector<pair<int, int>>c(M);
    rep(i,M){cin>>c[i].first>>c[i].second;c[i].first--;}
    for(int i=(N==1)?0:((int)pow(10, N-1));i<m;++i){
        string s = to_string(i);
        bool can = true;
        for(int j=0;j<M;++j){
            if((int)(s[c[j].first]-'0')!=c[j].second){can=false;break;}
        }
        if(can){cout << s << endl;return 0;}
    }
    cout << -1 << endl;
    return 0;
}