#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N;cin>>N;
    vector<int>h(N);rep(i,N)cin>>h[i];

    int ans = 0;

    while(1){
        int left = -1, right = N;
        bool flag = false;
        for(int i=0;i<N;++i){
            if(h[i]!=0){left=i;break;}
        }
        if(left==-1)break;
        for(int i=left;i<N;++i){
            if(h[i]==0){right = i;break;}
        }
        for(int i=left;i<right;++i){
            h[i]--;
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}