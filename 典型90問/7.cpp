#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>A(N);rep(i,N)cin>>A[i];
    sort(A.begin(), A.end());

    int Q;cin>>Q;
    rep(i, Q){
        int b;cin>>b;
        int idx = (int)(lower_bound(A.begin(), A.end(), b) - A.begin());
        int ans = 0;
        if(idx==0){
            ans = abs(A[0]-b);
        }
        else ans = min(abs(A[idx]-b), abs(A[idx-1]-b));
        cout << ans << endl;
    }
    return 0;
}