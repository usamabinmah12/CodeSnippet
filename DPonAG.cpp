
int rec(int u) {
  if (dp[u] != -1) return dp[u];
  int ans = 0;
  for (auto v: g[u]) {
    ans = max(ans, 1 + rec(v));
  }
  return dp[u] = ans;
}
