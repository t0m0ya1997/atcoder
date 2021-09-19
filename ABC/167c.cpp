#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M,X;cin>>N>>M>>X;
    vector<int>C(N);
    vector<vector<int>>A(N, vector<int>(M));
    rep(i,N){
        cin>>C[i];
        rep(j,M)cin>>A[i][j];
    }

    int ans = 1001001001;

    for(int bit=0;bit<(1<<N);++bit){
        vector<int>sum(M,0);
        int cost=0;
        rep(i,N){
            if(bit&(1<<i)){
                cost += C[i];
                rep(j,M){
                    sum[j] += A[i][j];
                }
            }
        }
        bool can = true;
        rep(i,M){
            if(X>sum[i])can=false;
        }
        if(can)ans = min(ans, cost);
    }

    if(ans==1001001001)ans=-1;
    cout << ans << endl;
    return 0;
}