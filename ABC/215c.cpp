#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    string s;int k;cin>>s>>k;
    int num = 0;
    sort(s.begin(), s.end());
    do{
        num++;
        if(num==k){
            cout << s << endl;
            return 0;
        }
    }while(next_permutation(s.begin(), s.end()));
    return 0;
}