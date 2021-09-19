#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
using Graph = vector<vector<int>>;
int main(){
    int N;cin>>N;
    Graph g(N);
    rep(i,N-1){
        int a,b;cin>>a>>b;--a;--b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    rep(i,N)sort(g[i].begin(), g[i].end());

    stack<int>st;
    st.push(0);

    vector<bool>seen(N, false);

    while(!st.empty()){
        int n = st.top();
        st.pop();
        for(int x:g[n]){
            if(!seen[x]){
                st.push(x);
                cout << x+1 << endl;
                seen[x] = true;
            }
        }
    }
    return 0;
}