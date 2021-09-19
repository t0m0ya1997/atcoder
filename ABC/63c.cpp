#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    int sum = 0;
    vector<int>a(N);rep(i,N){cin>>a[i];sum+=a[i];}
    if(sum%10!=0 || sum==0){
        cout << sum << endl;
        return 0;
    }
    sort(a.begin(), a.end());
    rep(i, N){
        int tmp = sum - a[i];
        if(tmp%10!=0){
            cout << tmp << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}