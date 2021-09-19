#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>A(N);rep(i,N)cin>>A[i];
    int min_ = 2000000000;

    for(int bit=0;bit<(1<<N);++bit){
        int ored=A[0], xored =0;
        for(int i=0;i<N-1;++i){
            if(bit & (1<<i)){
                xored ^= ored;
                ored = A[i+1];
            }
            else{
                ored |= A[i+1];
            }
        }
        xored^=ored;
        min_ = min(min_, xored);
    }

    cout << min_ << endl;
    return 0;
}