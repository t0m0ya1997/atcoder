#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    queue<int>can;
    map<int, vector<int>>mp;
    vector<queue<int>>q(M);
    rep(i,M){
        int k;cin>>k;
        rep(j,k){
            int a;cin>>a;
            q[i].push(a);
        }
    }

    rep(i,M){
        int f = q[i].front();
        mp[f].emplace_back(i);
        if(mp[f].size() == 2){
            can.push(f);
        }
    }

    if(can.empty()){cout << "No" << endl;return 0;}

    rep(i, N){
        if(can.empty())break;
        int now = can.front();
        can.pop();
        for(auto x: mp[now]){
            q[x].pop();
            if(q[x].empty())continue;
            int f = q[x].front();
            mp[f].emplace_back(x);
            if(mp[f].size() == 2){
                can.push(f);
            }
        }
        mp.erase(now);
    }

    bool ok = true;
    rep(i,M){
        if(!q[i].empty())ok=false;
    }

    if(ok)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}