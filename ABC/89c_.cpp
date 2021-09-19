#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int N;
string s;
vector<ll>cnt(5,0);
int main(){
    cin>>N;
    rep(i,N){
        cin>>s;
        switch(s[0]){
            case 'M':cnt[0]++;break;
            case 'A':cnt[1]++;break;
            case 'R':cnt[2]++;break;
            case 'C':cnt[3]++;break;
            case 'H':cnt[4]++;break;
            default:break;
        }
    }
    ll ans = 0;
    for(int bit=0;bit<(1<<5);++bit){
        int num = 0;
        rep(i, 5){if(bit & (1<<i))num++;}
        if(num!=3)continue;

        ll subans = 1;
        rep(i,5){
            if(bit & (1<<i))subans*=cnt[i];
        }
        ans += subans;
    }

    cout << ans << endl;

    return 0;
}