#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
vector<int>prime_decomp(int N){
    int N_ = N;
    vector<int>ans;
    for(int i=2;i+i<=N;++i){
        int ex = 0;
        while(N_%i==0){
            N_ /= i;
            ex++;
        }
        if(ex>0){
            ans.emplace_back(i);
        }
    }
    if(N_>1){
        ans.emplace_back(N);
    }
    return ans;
}
int main(){
    int N,M;cin>>N>>M;
    set<int>prime;
    rep(i,N){
        int a;cin>>a;
        auto x = prime_decomp(a);
        for(int y:x){prime.insert(y);}
    }
    vector<bool>can(M+1, true);

    for(auto y:prime){
        for(int i=y;i<=M;i+=y){
            can[i]=false;
        }
    }
    
    int sum = 0;
    rep1(i,M)if(can[i])sum++;
    cout << sum << endl;
    rep1(i,M)if(can[i])cout << i << endl;
    
    return 0;
}