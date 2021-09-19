#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;cin>>s;
    int t;cin>>t;
    int x=0,y=0, cnt=0;
    rep(i, (int)s.size()){
        switch(s[i]){
            case 'L': --x;break;
            case 'R': ++x;break;
            case 'U': ++y;break;
            case 'D': --y;break;
            default: ++cnt;break;
        }
    }

    int ans_ = abs(x) + abs(y);
    if(t==2){
        if(ans_ > cnt){
            cout << ans_ - cnt << endl;
        }
        else{
            cout << (cnt-ans_)%2 << endl;
        }
    }
    else{
        cout << ans_ + cnt << endl;
    }
    return 0;
}