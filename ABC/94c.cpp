#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>a(N),b(N);rep(i,N){cin>>a[i];b[i]=a[i];}
    sort(a.begin(), a.end());
    int be=a[N/2-1], af=a[N/2];
    rep(i,N){
        if(b[i]<=be)cout << af << endl;
        else cout << be << endl;
    }
    return 0;
}