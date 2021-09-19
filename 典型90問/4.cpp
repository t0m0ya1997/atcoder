#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int H,W;cin>>H>>W;
    int a[H][W];
    rep(i,H)rep(j,W){cin>>a[i][j];}

    vector<int>sumH(H),sumW(W);
    rep(i,H){
        int sum = 0;
        rep(j,W){
            sum+=a[i][j];
        }
        sumH[i]=sum;
    }

    rep(i,W){
        int sum = 0;
        rep(j,H){
            sum+=a[j][i];
        }
        sumW[i]=sum;
    }

    rep(i,H){
        rep(j,W){
            cout << sumH[i] + sumW[j] - a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}