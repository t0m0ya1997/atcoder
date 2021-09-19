#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    map<int, int>mp;
    rep(i,N){
        int a;cin>>a;
        mp[a-1]++;
        mp[a]++;
        mp[a+1]++;
    }
    int max_ = -1;
    for(const auto& [key, value]:mp){
        max_ = max(max_, value);
    }
    cout << max_ << endl;
    return 0;
}