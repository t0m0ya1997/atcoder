#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int H,W;
    cin>>H>>W;
    int H_ = H/2 + H%2;
    int W_ = W/2 + W%2;
    if(H==1||W==1){
        cout << H * W << endl;
        return 0;
    }
    cout << H_ * W_ << endl;
    return 0;
}