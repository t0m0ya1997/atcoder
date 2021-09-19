#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int n;cin>>n;
    deque<int>dq;
    bool even = (n%2==0);
    rep(i, n){
        int a;cin>>a;
        if(i%2==0)dq.push_back(a);
        else dq.push_front(a);
    }

    if(!even)reverse(dq.begin(), dq.end());
    
    for(auto x:dq){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}