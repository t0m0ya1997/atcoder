#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int n;cin>>n;
    vector<vector<int>>a(n, vector<int>(n));
    rep(i,n)rep(j,n)cin>>a[i][j];

    if(n==1){
        cout << 0 << endl;
        cout << a[0][0] << endl;
        return 0;
    }
    vector<int>A(n),B(n);
    A[0]=0;
    B[0]=a[0][0];

    bool can = true;
    rep(i,n-1)rep(j,n-1){
        int ul=a[i][j], ur=a[i][j+1], bl=a[i+1][j], br=a[i+1][j+1];
        if(ul-ur!=bl-br || ul-bl != ur-br){can=false;break;}
        else{
            B[j] = bl;
            B[j+1] = br;
            A[i] = ul;
            A[i+1] = bl;
        }
    }
    if(!can){cout << "No" << endl;return 0;}
    else{
        cout << "Yes" << endl;
        for(int x:A){
            cout << x << " ";
        }
        cout << endl;
        for(int x:B){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}