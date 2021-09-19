#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    string s;cin>>s;
    deque<char>dq;
    rep(i,N){
        dq.push_back(s[i]);
    }
    int ans = 0;
    while(!dq.empty()){
        while(((int)dq.size()>0)&&(dq.front()=='R')){dq.pop_front();}
        while(((int)dq.size()>0)&&(dq.back()=='W')){dq.pop_back();}
        if(dq.empty())break;
        ans++;
        dq.pop_front();dq.pop_back();
    }
    cout << ans << endl;
    return 0;
}