#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int Q;cin>>Q;
    vector<ll>ans;
    priority_queue<ll, vector<ll>, greater<ll>>q;
    ll x_ = 0;
    rep(i,Q){
        int c;cin>>c;
        if(c==3){
            ans.push_back(q.top()+x_);
            q.pop();
            continue;
        }
        if(c==1){
            ll x;cin>>x;
            q.push(x-x_);
            continue;
        }
        if(c==2){
            ll x;cin>>x;
            x_+=x;
            continue;
        }
    }
    for(ll v:ans){
        cout << v << endl;
    }
    return 0;
}