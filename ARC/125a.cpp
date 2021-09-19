#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M;cin>>N>>M;
    vector<int>s(N), t(M);
    bool sz=false, so=false, tz=false, to=false;
    rep(i,N){
        cin>>s[i];
        if(s[i]==0)sz=true;
        else so=true;
    }
    rep(i,M){
        cin>>t[i];
        if(t[i]==0)tz=true;
        else to=true;
    }
    
    if(((!sz)&tz) || ((!so)&to)){
        cout << -1 << endl;return 0;
    }

    int sh = 1;
    while(s[0]==s[N-sh] && s[0]==s[sh]){
        sh++;
    };
    
    int ans = 0;
    int now = s[0];
    bool flag = true;
    deque<int>t_(t.begin(), t.end());
    while(!t_.empty()){
        if(t_.front()==now){
            t_.pop_front();
            ans++;
        }
        else if(flag){
            ans += sh;
            now = (now==0)?1:0;
            flag = false;
        }
        else{
            now = (now==0)?1:0;
            ans++;
        }
    }
    cout << ans << endl;
    

    return 0;
}