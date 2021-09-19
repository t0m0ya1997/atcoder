#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;ll K;cin>>N>>K;
    vector<int>to(N);
    rep(i,N){
        int a;cin>>a;--a;
        to[i] = a;
    }

    ll start, end;

    queue<int>q;
    const ll INF = 1001001001;
    vector<ll>dist(N, INF);
    dist[0] = 0;
    q.push(0);

    while(q.size()){
        int v = q.front();q.pop();
        if(dist[to[v]]==INF){
            dist[to[v]] = dist[v] + 1;
            q.push(to[v]); 
        }
        else{
            start = dist[to[v]];
            end = dist[v] + 1;
        }
    }
    ll dis = 0;
    if(K<=start){
        dis = K;
    }
    else{
        dis = K-start;
        dis = dis % (end - start);
        dis += start;
    }

    rep(i,N){
        if(dist[i]==dis){cout << i+1 << endl;return 0;}
    }

    return 0;
}