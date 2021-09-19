#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main_(){
    int N;cin>>N;
    vector<int>L(N);rep(i,N)cin>>L[i];
    int ans = 0;
    for(int i=0;i<N-2;++i){
        for(int j=i+1;j<N-1;++j){
            for(int k=j+1;k<N;++k){
                if(L[i]<L[j]+L[k] && L[j] < L[i] + L[k] && L[k] < L[i] + L[j])ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

// ちゃんとした解法
int main(){
    int N;cin>>N;
    
}