#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i, n) for(int i=1;i<=n;++i)
#define ll long long
int N;
pair<int, int>corner(vector<string>s_){
    int x=-1,y=-1;
    rep(i,N){
        rep(j,N){
            if(s_[i][j]=='#' && x<0)x=i;
            if(s_[j][i]=='#' && y<0)y=i;
        }
    }
    return make_pair(x, y);
}

vector<string>roll(vector<string>s_){
    vector<string>ans(s_.begin(), s_.end());
    rep(i,N)rep(j,N){
        ans[i][j] = s_[N-1-j][i];
    }
    return ans;
}
bool check(vector<string>s_, vector<string>t_, pair<int, int>p_, pair<int, int>q_){
    bool can = true;
    for(int i=0;(i+p_.first<N)&&(i+q_.first<N);++i){
        for(int j=0;(j+p_.second<N)&&(j+q_.second<N);++j){
            if(s_[i+p_.first][j+p_.second]!=t_[i+q_.first][j+q_.second])can=false;
        }
    }
    return can;
}

int count(vector<string>a_){
    int ans = 0;
    rep(i,N)rep(j,N){
        if(a_[i][j]=='#')ans++;
    }
    return ans;
}

int main(){
    cin>>N;
    vector<string>s(N),t(N);
    rep(i,N)cin>>s[i];rep(i,N)cin>>t[i];
    auto p = corner(s);

    if(count(s)!=count(t)){cout << "No" << endl;return 0;}
    
    rep(i,4){
        auto q = corner(t);
        if(check(s,t,p,q)){cout << "Yes" << endl;return 0;}
        t = roll(t);
    }

    cout << "No" << endl;

    return 0;
}