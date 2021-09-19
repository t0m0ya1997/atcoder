#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;cin>>s;
    queue<char>q;
    rep(i, (int)s.size()-1){
        if(s[i]==s[i+1])q.push(s[i]);
    }
    reverse(s.begin(), s.end());
    int ans = 0;
    int cnt = 0;
    rep(i,(int)s.size()){
        if(s[i]!=s[i+1]){
            if(s[i]!=q.front())cnt++;
        }
        else{
            ans += cnt;
        }
    }

    return 0;
}