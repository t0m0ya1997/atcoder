#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>b(N);rep(i,N)cin>>b[i];
    int next = b[0] - 1;
    int ans = 0;
    bool can = false;
    rep(i,N){
        ans++;
        if(i==0)next = b[0] - 1;
        if(next == 1){cout<<ans<<endl; return 0;}
        next = b[next] - 1;
    }
    cout << -1 << endl;
    return 0;
}