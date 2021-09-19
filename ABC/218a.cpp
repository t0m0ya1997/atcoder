#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;string s;
    cin>>N>>s;
    if(s[N-1]=='o')cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}