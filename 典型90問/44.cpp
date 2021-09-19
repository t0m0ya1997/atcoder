#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long

int main(){
    int N,Q;cin>>N>>Q;
    vector<int>A(N);
    rep(i,N)cin>>A[i];

    int shift = 4*N;

    rep(i,Q){
        int t,x,y;cin>>t>>x>>y;
        if(t==1){
            --x;--y;
            int tmp = A[(shift+x)%N];
            A[(shift+x)%N] = A[(shift+y)%N];
            A[(shift+y)%N] = tmp;

        }
        if(t==2){
            --shift;
        }
        if(t==3){
            --x;
            int idx = (shift+x)%N;
            cout << A[idx] << "\n";
        }
    }
    return 0;
}