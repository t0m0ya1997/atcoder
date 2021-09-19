#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string a,b,c;cin>>a>>b>>c;
    map<char, queue<char>>q;
    rep(i,a.size()){q['a'].push(a[i]);}
    rep(i,b.size()){q['b'].push(b[i]);}
    rep(i,c.size()){q['c'].push(c[i]);}
    char next = a[0];
    while(1){
        if(q[next].empty()){cout << (char)toupper(next) << endl;return 0;}
        char tmp = q[next].front();
        q[next].pop();
        next = tmp;
    }
    
    return 0;
}