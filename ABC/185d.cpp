#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    if(N==M){cout << 0 << endl;return 0;}
    vector<int>A(M);
    rep(i,M)cin>>A[i];
    A.push_back(0);
    A.push_back(N+1);
    sort(A.begin(), A.end());
    vector<int>area;
    rep(i, (int)A.size()){
        int a = A[i+1] - A[i] -1;
        if(a>0){area.emplace_back(a);}
    }
    sort(area.begin(), area.end());
    int k= area[0];

    int sum = 0;

    rep(i, (int)area.size()){
        sum += (int)ceil((double)area[i]/k);
    }

    cout << sum << endl;
    return 0;
}