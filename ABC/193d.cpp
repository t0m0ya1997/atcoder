#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int K;cin>>K;
    string t,a;cin>>t>>a;
    vector<int>c(10, K);
    int remain = 9*K-8;
    int ts = 0,as = 0;
    vector<int>p(10,0),q(10,0);
    rep(i,4){
        int s = (int)(t[i]-'0');
        c[s]--;p[s]++;
    }
    rep1(i,9){
        if(p[i]==0){ts+=i;continue;}
        ts += i * (int)pow(10, p[i]);
    }

    rep(i,4){
        int s = (int)(a[i]-'0');
        c[s]--;q[s]++;
    }
    rep1(i,9){
        if(q[i]==0){as+=i;continue;}
        as += i * (int)pow(10, q[i]);
    }
    double ans = 0.0;
    for(int i=1;i<=9;++i){
        if(c[i]==0)continue;
        double prob1 = (double)c[i]/remain;
        int num = 0;
        c[i]--;
        for(int j=1;j<=9;++j){
            if(((ts-j*pow(10, p[j])+j*pow(10, p[j]+1))>(as-i*pow(10,q[i])+i*pow(10, q[i]+1)))&&c[j]>0){
                num += c[j];
            }
        }
        ans += prob1 * ((double)num/(remain-1));
        c[i]++;
    }
    printf("%.10lf\n", ans);
    return 0;
}