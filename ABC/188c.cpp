#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long

int main(){
    int N;cin>>N;
    int N_ = (int)pow(2,N);
    queue<pair<int, int>>q;
    rep(i,N_){
        int a;cin>>a;q.push(make_pair(a, i+1));
    }

    rep(i,N-1){
        queue<pair<int, int>>p;
        while(!q.empty()){
            auto a1 = q.front();q.pop();
            auto a2 = q.front();q.pop();
            if(a1.first > a2.first){
                p.push(a1);
            }
            else{
                p.push(a2);
            }
        }
        q = p;
    }

    auto a = q.front();q.pop();
    auto b = q.front();q.pop();

    if(a.first > b.first){
        cout << b.second << endl;
    }
    else{
        cout << a.second << endl;
    }
    
    return 0;
}