#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int Q;cin>>Q;
    deque<int>dq;
    vector<int>ans;

    for(int i=0;i<Q;++i){
        int t,x;cin>>t>>x;
        if(t==1)dq.push_front(x);
        if(t==2)dq.push_back(x);
        if(t==3){
            ans.emplace_back(dq.at(x-1));
        }
    }

    for(int x:ans){
        cout << x << endl;
    }
    return 0;
}