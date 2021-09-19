#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>ans(N);
    rep(i,N){
        int a;cin>>a;--a;
        ans[a] = i+1;
    }

    rep(i,N){
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}