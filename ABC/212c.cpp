#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    vector<int>A(N),B(M);
    rep(i,N)cin>>A[i];rep(i,M)cin>>B[i];
    sort(B.begin(), B.end());
    int min_ = 1001001001;
    rep(i,N){
        int idx = (int)(lower_bound(B.begin(), B.end(), A[i])-B.begin());
        if(idx==0){min_ = min(min_, abs(A[i]-B[idx]));continue;}
        min_ = min(min_, min(abs(A[i] - B[idx]), abs(A[i]-B[idx-1])));
    }
    cout << min_ << endl;
    return 0;
}