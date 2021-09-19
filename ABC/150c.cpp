#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>a(N),b(N);
    rep(i,N)cin>>a[i];
    rep(i,N)cin>>b[i];
    vector<int>p(N);
    rep1(i,N)p[i-1]=i;
    int na, nb;
    int cnt = 0;
    do{
        cnt++;
        bool cana = true, canb = true;
        rep(i,N){
            if(p[i]!=a[i])cana=false;
        }
        rep(i,N){
            if(p[i]!=b[i])canb=false;
        }
        if(cana)na = cnt;
        if(canb)nb = cnt;
    }while(next_permutation(p.begin(), p.end()));

    cout << abs(na-nb) << endl;
    return 0;
}