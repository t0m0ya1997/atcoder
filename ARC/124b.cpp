#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>a(N),b(N);
    int ev_a = 0, od_a=0, ev_b=0, od_b=0;
    rep(i,N){
        cin>>a[i];
        if(a[i]%2)od_a++;
        else ev_a++;
    }
    rep(i,N){
        cin>>b[i];
        if(b[i]%2)od_b++;
        else ev_b++;
    }
    bool odd=false, even=false;
    if(ev_a==ev_b)even=true;
    if(ev_a==od_b)odd=true;
    set<int>cand;
    rep(i,N){
        int x = a[0]^b[i];
        if(x%2==0&&even)cand.insert(x);
        if(x%2==1&&odd)cand.insert(x);
    }

    vector<int>ar(N);
    sort(b.begin(), b.end());
    vector<int>ans;
    for(auto y:cand){
        rep(i,N)ar[i]=y^a[i];
        sort(ar.begin(), ar.end());
        bool can = true;
        rep(i,N){
            if(ar[i]!=b[i]){can=false;break;}
        }
        if(can)ans.emplace_back(y);
    }

    if((int)ans.size()==0){cout << 0 << endl;return 0;}
    else cout << (int)ans.size() << endl;

    sort(ans.begin(), ans.end());

    for(auto y:ans){
        cout << y << endl;
    }
    return 0;
}