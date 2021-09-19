#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int c[3][3];
int main(){
    rep(i,3)rep(j,3)cin>>c[i][j];
    int sum0 = c[0][0] + c[1][1] + c[2][2];
    int sum1 = c[0][1] + c[1][0] + c[1][2] + c[2][1];
    int sum2 = c[0][2] + c[1][1] + c[2][0];

    if(sum0!=sum2){
        cout << "No" << endl;
        return 0;
    }
    if(sum1-c[1][1] == sum0){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}