
int rec(int i, int weight) {
  if (i == n + 1) return 0;
  if (dp[i][weight] != -1) return dp[i][weight];
  int ans = rec(i + 1, weight);
  if (weight + w[i] <= W) ans = max(ans, rec(i + 1, weight + w[i]) + v[i]);
  return dp[i][weight] = ans;
}
