#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    set<string>st;
    vector<int>ans;
    int N;cin>>N;
    rep(i,N){
        string s;cin>>s;
        if(st.count(s)==0){
            ans.emplace_back(i);
            st.insert(s);
        }
    }
    for(int x:ans){
        cout << x+1 << endl;
    }
    return 0;
}