#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;cin>>s;
    deque<char>dq;
    rep(i, (int)s.size()){
        dq.push_back(s[i]);
    }
    int Q;cin>>Q;
    bool mode = false;
    rep(i,Q){
        int s,f;char c;cin>>s;
        if(s==1)mode=!mode;
        else{
            cin>>f>>c;
            if(mode){
                // reverse
                if(f==1)dq.push_back(c);
                else dq.push_front(c);
            }
            else{
                // original
                if(f==1)dq.push_front(c);
                else dq.push_back(c);
            }
        }
    }
    if(mode)reverse(dq.begin(), dq.end());

    for(auto x:dq){
        cout << x;
    }
    cout << endl;
    return 0;
}