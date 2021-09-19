#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int n;cin>>n;
    vector<vector<int>>count(n, vector<int>(26, 0));
    rep(i,n){
        string str;cin>>str;
        rep(j, (int)str.size()){
            count[i][(int)(str[j] - 'a')]++;
        }
    }

    vector<char>ans;
    rep(i, 26){
        int min_ = 255;
        rep(j, n){
            min_ = min(count[j][i], min_);
        }
        rep(j, min_){
            ans.emplace_back('a' + i);
        }
    }

    for(auto x:ans){
        cout << x;
    }
    cout << endl;
    return 0;
}