#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    if(1<=N && N<=125){cout << 4 << endl;return 0;}
    if(126<=N && N<=211){cout << 6 << endl;return 0;}
    if(211<=N && N<=214){cout << 8 << endl;return 0;}
    return 0;
}