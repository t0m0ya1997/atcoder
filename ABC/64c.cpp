#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<bool>flag(8, false);
    vector<int>rate(N);
    int additional = 0;
    rep(i,N){
        cin>>rate[i];
        if(rate[i]<3200)flag[rate[i]/400] = true;
        else additional++;
    }

    int min_ = 0, max_ = 0;
    rep(i, 8){
        if(flag[i]){min_++;max_++;}
    }
    max_+=additional;

    if(min_==0&&additional>0)min_++;

    cout << min_ << " " << max_ << endl;
    return 0;
}