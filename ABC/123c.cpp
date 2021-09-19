#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
struct town{
    ll from;
    ll to;
    ll num;
};
int main(){
    ll N;cin>>N;
    ll A,B,C,D,E;cin>>A>>B>>C>>D>>E;
    vector<town>T(6);
    T[0].from = 0;T[0].to=A;T[0].num=N;
    T[1].from = A;T[1].to=B;T[1].num=0LL;
    T[1].from = B;T[2].to=C;T[2].num=0LL;
    T[1].from = C;T[3].to=D;T[3].num=0LL;
    T[1].from = D;T[4].to=E;T[4].num=0LL;
    T[1].from = E;T[5].to=0;T[5].num=0LL;
    return 0;
}