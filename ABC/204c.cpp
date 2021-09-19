#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
using Graph = vector<vector<int>>;
int N,M;
int main(){
    cin>>N>>M;
    Graph g(N);
    rep(i,M){
        int a,b;cin>>a>>b;
        --a;--b;
        g[a].emplace_back(b);
    }
    set<pair<int, int>>ans;
    rep(i, N){
        queue<int>q;
        vector<bool>visit(N, false);
        q.push(i);
        visit[i]=true;
        while(q.size()){
            int v = q.front();q.pop();
            ans.insert(make_pair(i, v));
            visit[v] = true;
            for(int u:g[v]){
                if(!visit[u]){
                    q.push(u);
                }
            }
        }
    }
    cout << (int)ans.size() << endl;
    return 0;
}