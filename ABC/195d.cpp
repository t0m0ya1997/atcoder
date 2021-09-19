#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int main(){
    int N,M,Q;cin>>N>>M>>Q;
    vector<int>W(N),V(N);
    rep(i,N)cin>>W[i]>>V[i];
    int w[N][N],v[N][N];
    rep(i,N)rep(j,N){
        w[i][j] = W[i] + W[j];
        v[i][j] = V[i] + V[j];
    }
    vector<int>X(M);
    rep(i,M)cin>>X[i];

    rep(i,Q){
        int L,R;cin>>L>>R;
        --L;--R;
        vector<int>x;
        rep(i,M){if(i<L || i>=R)x.push_back(X[i]);}
        int size = (int)x.size();
        vector<int>y(size, 0);
        vector<bool>can(N,true);
        int ans = 0;
        for(int s =0;s<size;++s){
            int tmp = 0;
            int uj, uk;
            for(int j=0;j<N-1;++j){
                for(int k=j+1;k<N;++k){
                    if(can[j]&&can[k]&&(tmp<v[j][k])&&(x[s]>=w[j][k])){
                        uj = j;
                        uk = k;
                        tmp = v[j][k];
                    }
                }
            }
            if(tmp>0){y[s]=tmp;can[uj]=false;can[uk]=false;}
        }
        for(int s=0;s<size;++s){
            int tmp=0;
            int idx;
            if(y[s]>0)continue;
            for(int j=0;j<N;++j){
                if(can[j]&&tmp<V[j]&&x[s]>=W[j]){
                    tmp = V[j];
                    idx = j;
                }
            }
            if(tmp>0){y[s]=tmp;can[idx]=false;}
        }
        for(auto h:y){
            ans+=h;
        }
        cout << ans << endl;
    }
    return 0;
}