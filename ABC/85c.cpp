#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int N,Y;
int main(){
    cin>>N>>Y;
    for(int i=0;i<=N;++i){
        for(int j=0;i+j<=N;++j){
            if(10000*i+5000*j+1000*(N-i-j)==Y){
                cout << i  << " " << j << " " << N-i-j << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}