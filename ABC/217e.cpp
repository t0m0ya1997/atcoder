#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    priority_queue<int, vector<int>, greater<int>>A;
    int Q;cin>>Q;
    queue<int>q;
    rep(i,Q){
        int c;cin>>c;
        if(c==1){
            int x;cin>>x;
            q.push(x);
        }
        if(c==2){
            if(A.empty()){cout << q.front() << endl;q.pop();}
            else{cout << A.top() << endl;;A.pop();}
        }
        if(c==3){
            while(!q.empty()){
                A.push(q.front());
                q.pop();
            }
        }
    }
    return 0;
}