#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>T(N);
    rep(i,N)cin>>T[i];
    sort(T.begin(), T.end(), greater<int>());
    if(N==1){cout << T[0] << endl;return 0;}
    int sum1 = T[0], sum2 = T[1];

    for(int i=2;i<N;++i){
        if(sum1 < sum2)sum1 += T[i];
        else sum2 += T[i];
    }

    cout << max(sum1, sum2) << endl;
    return 0;
}