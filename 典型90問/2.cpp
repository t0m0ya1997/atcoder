#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    if(N%2==1)return 0;

    string s = "";
    rep(i,N/2){s += '(';s += ')';}sort(s.begin(), s.end());
    do{
        int lnum = 0, rnum = 0;
        bool can = true;
        rep(i, (int)s.size()){
            if(s[i]=='(')lnum++;
            else rnum++;
            if(lnum < rnum){can = false;break;}
        }
        if(can)cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
    
    return 0;
}