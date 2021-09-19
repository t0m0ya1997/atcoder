#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;cin>>s;
    stack<char>st;
    for(int i=0;i<(int)s.size();++i){
        if(s[i]=='B'){
            if(!st.empty())st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    string ans = "";
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}