# C++ reference

## グラフの書き方
* グラフ
```c++
using Graph = vector<vector<int>>;//有向グラフ
```
* 重みつきグラフ
```c++
struct Edge {
    int to;     // 辺の行き先
    int weight; // 辺の重み
    Edge(int t, int w) : to(t), weight(w) { }
};
using Graph = vector<vector<Edge>>;
```

## 素因数分解
(素因数, 指数)の`pair`型で管理すると良い
```c++
vector<pair<ll, ll>>

vector<pair<ll, ll>>prime_factrize(ll N){
    vector<pair<ll, ll>>ans;
    for(ll i=2;i*i<=N;++i){
        ll ex = 0;
        while(N%i==0){
            ex++;
            N/=i;
        }
        if(ex>0)ans.emplace_back(make_pair(i, ex));
    }
    if(N>1){
        ans.emplace_back(make_pair(N, 1));
    }
    return ans;
}
```

## DFS(深さ優先探索)
* stack を使え

## BFS(幅優先探索)
* queue をつかえ

## 順列全探索 O(N!)

```c++
int N = 8;
vector<int>p(N);
iota(p.begin(), p.end(), 1);

do{
    //hogehoge
}while(next_permutation(p.begin(), p.end()))
```

## bit全探索 O(2^N)
```c++
int N = 8;
for(int bit=0;bit<(1<<N);++bit){
    if (bit & (1<<i)) // 列挙に i が含まれるか
}
```

## 素数判定 O(√N)
```c++
bool prime_check(int N) {
    int B = min(N - 1, (int)(sqrt(1.0 * N)));
    for (int i = 2; i <= B; i++) {
        if (N % i == 0) return false;
    }
    return true;
}
```

## 最大公約数 O(log(a+b))
```c++
// 再帰関数を使わない実装
long long gcd(long long a, long long b) {
    while (a >= 1LL && b >= 1LL) {
        if (a >= b) a = a % b;
        else b = b % a;
    }
    if (a >= 1LL) return a;
    return b;
}
```

## 最適化オプション
```c++
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
```

## 二部探索（上限、下限のインデックスを返す関数）
* 二分探索は通常は「**ソート済み配列の中から目的のものを探す**」アルゴリズム
* `binary_search`は一番シンプルな二分探索
    * keyがあるかどうかは分かる
    * しかし、どこにkeyがあるのか分からない
    * さらに、同じ値のkeyが複数あったとき、どのkeyを指しているのか分からない
* `lower_bound`は、探索したいkey以上のイテレータを返す
* `upper_bound`は、探索したいkeyより大きいイテレータを返す

#### 使い方
1. lower_boundのイテレータから先頭のイテレータを引くと、あるkeyより小さい要素の個数を求めることができる
2. 末尾のイテレータからlower_boundのイテレータを引くと、あるkey以上の要素の個数を求めることができる
```c++
int base; //基準となる値
vector<int>hoge; //昇順になっている必要がある
auto Iter1 = lower_bound(hoge.begin(), hoge.end(), base);
```

## テンプレート関数 `chmin`
* aよりbの値が小さかったらaの値をbに置き換える
* そうでなかったら何もしない
```c++
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
```

## テンプレート関数 `chmax`
* aよりbの値が大きかったらaの値をbに置き換える
* そうでなかったら何もしない
```c++
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
```

## 深さ優先探索（DFS）
```c++
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v); // 再帰的に探索
    }
}
```