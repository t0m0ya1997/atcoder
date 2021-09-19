#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
bool check(int num){
    bool f1 = true;
    bool f2 = true;

    string s = to_string(num);
    rep(i,(int)s.size()){
        if(s[i]=='7')f1=false;
    }

    while(num > 0){
        if(num % 8 == 7){f2 = false;break;}
        else num /= 8;
    }
    return f1 & f2;
}
int main(){
    int N;cin>>N;
    int ans = 0;

    rep1(i,N){
        if(check(i))ans++;
    }
    cout << ans << endl;
    return 0;
}