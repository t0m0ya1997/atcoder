#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    string s;cin>>s;
    string s1, s2;
    s1 = s.substr(0,N);
    s2 = s.substr(N,N);
    int Q;cin>>Q;
    rep(i,Q){
        int t,a,b;cin>>t>>a>>b;
        --a;--b;
        if(t==1){
            if(b<N){
                swap(s1[a], s1[b]);
            }
            else if(a>=N){
                swap(s2[a-N], s2[b-N]);
            }
            else{
                swap(s1[a], s2[b-N]);
            }
        }
        else{
            swap(s1, s2);
        }
    }

    cout << s1 << s2 << endl;
    return 0;
}