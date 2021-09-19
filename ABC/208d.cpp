        #include<bits/stdc++.h>
        using namespace std;
        #define rep(i, n) for(int i=0;i<n;++i)
        #define rep1(i, n) for(int i=1;i<=n;++i)
        #define ll long long
        using Graph = vector<vector<pair<int, int>>>;
        int main(){
            int N,M;cin>>N>>M;
            const int INF = 1001001001;

            Graph g(N);
            rep(i,M){
                ll a,b,c;cin>>a>>b>>c;
                --a;--b;
                g[a].push_back({b,c});
            }

            vector<vector<int>>dp(N, vector<int>(N, INF));

            ll sum = 0;

            for(int i=0;i<N;++i){
                dp[i][i] = 0;
                for(auto x: g[i]){
                    dp[i][x.first] = min(dp[i][x.first], x.second);
                }
            }

            for(int k=0;k<N;++k){
                for(int s=0;s<N;++s){
                    for(int t=0;t<N;++t){
                        dp[s][t] = min(dp[s][t], dp[s][k]+dp[k][t]);
                        if(dp[s][t]!=INF)sum += 1LL * dp[s][t];
                    }
                }
            }
            cout << sum << endl;

            return 0;
        }