#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int N,Q;
int main(){
    cin>>N>>Q;
    vector<ll>A(N);
    vector<ll>acc(N);
    ll before;
    rep(i,N){
        cin>>A[i];
        if(i==0){acc[i]=A[i]-1;continue;}
        acc[i] = acc[i-1] + A[i] - A[i-1] - 1;
    }
    rep(i,Q){
        ll k;
        cin>>k;
        if(k>acc[N-1]){
            cout << A[N-1] + k - acc[N-1] << endl;
        }
        else{
            int idx = (int)(lower_bound(acc.begin(), acc.end(), k)-acc.begin());
            ll ans = A[idx] - (acc[idx] - k + 1);
            cout << ans << endl;
        }
    }

    return 0;
}