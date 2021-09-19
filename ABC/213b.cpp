#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>A(N);
    rep(i,N)cin>>A[i];
    vector<int>idx(N);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&A](int l, int r){
        return A[l] < A[r];
    });
    cout << idx[N-2]+1 << endl;
    return 0;
}