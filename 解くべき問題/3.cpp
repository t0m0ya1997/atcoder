#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
set<char>st={'A', 'C', 'G', 'T'};
int main(){
    string s;cin>>s;
    int ans = 0;
    for(int i=0;i<(int)s.size();++i){
        string ans_ = "";
        for(int j=i;j<(int)s.size();++j){
            if(st.count(s[j])>0)ans_+=s[j];
            else break;
        }
        if(ans<(int)ans_.size())ans = (int)ans_.size();
    }
    cout << ans << endl;
    return 0;
}