#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string X;cin>>X;
    map<char, char>mp, mp_;
    rep(i,26){
        mp[X[i]]=(char)('a'+i);
        mp_['a'+i] = X[i];
    }
    int N;cin>>N;
    vector<string>S(N);
    rep(i,N)cin>>S[i];

    rep(i,N){
        int size=S[i].size();
        rep(j,size){
            S[i][j] = mp[S[i][j]];
        }
    }

    sort(S.begin(), S.end());

    rep(i,N){
        int size=S[i].size();
        rep(j,size){
            S[i][j] = mp_[S[i][j]];
        }
    }

    rep(i,N){
        cout << S[i] << endl;
    }
    return 0;
}