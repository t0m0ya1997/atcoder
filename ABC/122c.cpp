#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,Q;cin>>N>>Q;
    string s;cin>>s;
    vector<int>acc(N,0);
    int tmp = 0;

    rep1(i,N-1){
        if(s[i]=='C' && s[i-1]=='A'){
            tmp++;
        }
        acc[i] = tmp;
    }

    rep(i,Q){
        int l,r;cin>>l>>r;
        cout << acc[r-1] - acc[l-1] << endl;
    }
    return 0;
}