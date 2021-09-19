#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int N;ll W;
ll imosu[200010];
int main(){
    cin>>N>>W;
    rep(i,N){
        int a,b;ll c;cin>>a>>b>>c;
        imosu[a]+=c;
        imosu[b]-=c;
    }
    ll temp = 0LL;
    for(int t=0;t<200010;++t){
        temp += imosu[t];
        if(temp > W){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}