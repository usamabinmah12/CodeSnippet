// largest x that  v | p ^x
int legendre(long long n, long long p) {
  int ans = 0;
  while (n) {
    ans += n / p;
    n /= p;
  }
  return ans;
}
