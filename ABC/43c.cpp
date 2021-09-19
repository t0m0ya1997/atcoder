#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    int sum = 0;
    vector<int>a(N);rep(i,N){cin>>a[i];sum+=a[i];}
    int mean = (int)(round(sum / (float)N));
    int ans = 0;
    for(auto x:a){
        ans += (mean-x)*(mean-x);
    }
    cout << ans << endl;
    return 0;
}