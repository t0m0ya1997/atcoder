#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long

bool div_2(ll num){
    if(num % 2 ==1)return false;
    num/=2;
    if(num%2==0)return false;
    else return true;
}

int main(){
    int N;cin>>N;
    int cnt_odd = 0, cnt_even = 0, cnt_4 = 0; 
    rep(i,N){
        ll a;cin>>a;
        if(a%2!=0)cnt_odd++;
        if(div_2(a))cnt_even++;
        if(a%4==0)cnt_4++;
    }

    if(cnt_odd <= cnt_4){cout << "Yes" << endl;return 0;}
    if((cnt_odd == cnt_4 + 1) && (cnt_even == 0)){cout << "Yes" << endl;return 0;}
    else cout << "No" << endl;
    return 0;
}