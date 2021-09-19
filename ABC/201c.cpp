#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;cin>>s;
    vector<int>flag(10, -1);
    set<int>nes;
    rep(i,10){
        if(s[i]=='o'){flag[i] = 1;nes.insert(i);}
        if(s[i]=='?')flag[i] = 0;
    }
    int ans = 0;
    rep(i,10)rep(j,10)rep(k,10)rep(l,10){
        bool can = true;
        if(flag[i]==-1 || flag[j]==-1 || flag[k]==-1 || flag[l]==-1)continue;
        for(int n:nes){
            if(i==n || j == n || k == n || l==n){
                continue;
            }
            else{can = false;break;}
        }
        if(can)++ans;
    }

    cout << ans << endl;
    return 0;
}