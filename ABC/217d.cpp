#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
#define INF (int)1001001001

int main(){
    int L,Q;cin>>L>>Q;
    set<int>st;
    st.insert(0);st.insert(L);
    rep(i, Q){
        int c,x;cin>>c>>x;
        if(c==1){
            st.insert(x);
        }
        else{
            auto it = st.lower_bound(x);
            cout << *it - *prev(it) << endl;
        }
    }
    
    return 0;
}