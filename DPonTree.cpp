
const int N = 1e5 + 9;
int sz[N];
vector<int> g[N];
void dfs(int u, int p) {
  sz[u] = 1;
  for (auto v: g[u]) {
    if (v != p) {
      dfs(v, u);
      sz[u] += sz[v];
    }
  }
}
// with Coloring
const int N = 1e5 + 9, mod = 1e9 + 7;
int dp[N][2];
vector<int> g[N];
void dfs(int u, int p) {
  dp[u][0] = 1;
  dp[u][1] = 1;
  for (auto v: g[u]) {
    if (v != p) {
      dfs(v, u);
      dp[u][0] = 1LL * dp[u][0] * (dp[v][0] + dp[v][1]) % mod;
      dp[u][1] = 1LL * dp[u][1] * dp[v][0] % mod;
    }
  }
}

