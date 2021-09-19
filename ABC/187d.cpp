#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    ll sumA = 0LL;
    vector<ll>A(N);
    rep(i,N){
        ll a,b;cin>>a>>b;
        sumA+=a;
        A[i] = 2*a + b;
    }
    sort(A.begin(), A.end(), greater<ll>());

    int ans = 0;
    rep(i,N){
        if(sumA<0){
            break;
        }
        else{
            ans++;
            sumA -= A[i];
        }
    }
    cout << ans << endl;
    return 0;
}