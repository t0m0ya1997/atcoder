#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    set<string>st;
    set<string>tst;
    rep(i,N){
        string s;cin>>s;
        st.insert(s);
    }
    for(auto x:st){
        if(x[0]!='!'){
            string x_ = "!" + x;
            if(st.count(x_)>0)tst.insert(x);
        }
    }

    if(tst.empty()){cout << "satisfiable" << endl;return 0;}
    for(auto x:tst){
        cout << x << endl;
        break;
    }
    
    return 0;
}