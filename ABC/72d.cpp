#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    stack<bool>st;
    int ans = 0;
    rep1(i,N){
        int a;cin>>a;
        bool now = !(a==i);
        if(st.empty()){st.push(now);continue;}
        if(!(st.top()||now)){
            st.pop();
            st.push(true);
            st.push(true);
            ++ans;
        }
        else st.push(now);
    }

    while(!st.empty()){
        if(!st.top())++ans;
        st.pop();
    }

    cout << ans << endl;

    return 0;
}