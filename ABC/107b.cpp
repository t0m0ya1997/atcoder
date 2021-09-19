#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int H,W;cin>>H>>W;
    vector<string>s(H);rep(i,H)cin>>s[i];
    vector<bool>valid_h(H, true), valid_w(W, true);
    rep(i, H){
        bool can = true;
        rep(j, W){
            if(s[i][j]=='.')continue;
            else{can = false;break;}
        }
        if(can){
            valid_h[i] = false;
        }
    }
    rep(i, W){
        bool can = true;
        rep(j, H){
            if(s[j][i]=='.')continue;
            else{can = false;break;}
        }
        if(can){
            valid_w[i] = false;
        }
    }

    rep(i, H){
        if(!valid_h[i])continue;
        rep(j, W){
            if(!valid_w[j])continue;
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}