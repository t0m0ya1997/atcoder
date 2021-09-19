#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>a(N+2);rep(i,N)cin>>a[i+1];
    a[0] = 0;a[N+1] = 0;
    int sum = 0;
    rep(i, N+1)sum+=abs(a[i]-a[i+1]);

    rep1(i, N){
        cout << sum - abs(a[i-1] - a[i]) - abs(a[i] - a[i+1]) + abs(a[i-1] - a[i+1]) << endl;
    }

    return 0;
}