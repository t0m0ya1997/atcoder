#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long

int main(){
    int N;cin>>N;
    vector<vector<int>>A(N, vector<int>(N));
    rep(i,N)rep(j,N)cin>>A[i][j];

    vector<vector<bool>>r(N, vector<bool>(N, false));
    int M;cin>>M;
    rep(i,M){
        int x,y;cin>>x>>y;--x;--y;
        r[x][y]=true;
        r[y][x]=true;
    }

    int ans = 1001001001;

    vector<int>idx(N);
    rep(i,N)idx[i]=i;

    do{
        bool can = true;
        rep(i, N-1){
            if(r[idx[i]][idx[i+1]]){can=false;break;}
        }
        if(!can)continue;
        else{
            int sum = 0;
            rep(i,N){
                sum += A[idx[i]][i];
            }
            ans = min(ans, sum);
        }
    }while(next_permutation(idx.begin(), idx.end()));

    if(ans == 1001001001)ans = -1;
    cout << ans << endl;
    
    return 0;
}