#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll unsigned long long

ll base8to10(string num){
    ll ans = 0ULL;
    reverse(num.begin(), num.end());
    rep(i, (int)num.size()){
        ans += (ll)pow(8ULL, (ll)i) * (ll)(num[i] - '0');
    }
    return ans ;
}

string base10to9(ll num){
    string ans = "";
    while(1){
        if(num % 9 == 8){
            ans += '5';
        }
        else{
            ans += (char)(num % 9 + '0');
        }
        num /= 9;
        if(num == 0)break;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string N;int K;cin>>N>>K;
    rep(i, K){
        ll base10 = base8to10(N);
        N = base10to9(base10);
    }
    cout << N << endl;
    return 0;
}