#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
struct UnionFind{
    vector<int>par, siz;

    UnionFind(int n):par(n, -1), siz(n, 1){}

    int root(int x){
        if(par[x] == -1)return x;
        else return par[x] = root(par[x]);
    }

    bool issame(int x, int y){
        return root(x) == root(y);
    }

    bool unite(int x, int y){
        x = root(x); y = root(y);

        if(x == y)return false;

        if(siz[x] < siz[y])swap(x, y);

        par[y] = x;
        siz[x] += siz[y];
        return true;
    }

    int size(int x){
        return siz[root(x)];
    }
};

int main(){
    int N,M;cin>>N>>M;
    vector<pair<int, pair<int, int>>>e;
    UnionFind uf(N);
    int sum = 0;
    rep(i,M){
        int a,b,c;cin>>a>>b>>c;
        --a;--b;
        if(c>0){
            e.emplace_back(make_pair(c, make_pair(a,b)));
            sum += c;
        }
        else{
            uf.unite(a, b);
        }
    }

    sort(e.begin(), e.end());

    rep(i,(int)e.size()){
        auto v = e[i];
        if(uf.root(v.second.first) == uf.root(v.second.second))continue;
        else{
            sum -= v.first;
            uf.unite(v.second.first, v.second.second);
        }
    }

    cout << sum << endl;
    return 0;
}