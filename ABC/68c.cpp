#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
int main(){
    int N,M;    cin>>N>>M;
    set<pair<int, int>>s;
    rep(i,M){
        int a,b; cin>>a>>b;
        s.insert({a,b});
    }

    rep1(i, N){
        if(s.count({1, i}) && s.count({i, N})){
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}