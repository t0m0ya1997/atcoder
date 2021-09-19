#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long

int main(){
    ll N,K;cin>>N>>K;
    ll res = K/N;
    ll mod = K%N;
    vector<int>a(N);
    rep(i,N)cin>>a[i];
    vector<int>idx(N);
    iota(idx.begin(), idx.end(), 0);

    sort(idx.begin(), idx.end(), [&a](size_t l, size_t r){
      return (a[l] < a[r]);
    });

    for(int i=0;i<N;++i){
      a[i] = res;
      if(idx[i]<mod)a[i]++;
    }

    for(int i:idx){
      cout << i << " ";
    }
    cout << endl;

    for(int x:a){
      cout << x << endl;
    }
    return 0;
}