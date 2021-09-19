#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int d[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int main(){
    int H,W;cin>>H>>W;
    vector<string>s(H);
    rep(i, H)cin>>s[i];

    rep(i, H)rep(j, W){
        if(s[i][j]=='.')continue;
        bool can = false;
        rep(k, 4){
            int h = i+d[k][0], w = j + d[k][1];
            if(h>=H||h<0||w>=W||w<0)continue;
            if(s[h][w]=='#'){can = true;continue;}
        }
        if(!can){cout << "No" << endl;return 0;}
    }
    cout << "Yes" << endl;
    return 0;
}