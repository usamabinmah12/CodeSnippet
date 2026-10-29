
const int N = 1e8 + 9;
bitset<N> f;
sieve() {
 
  int n = N - 9;
  vector<int> primes;
  f[1] = true;
  for (int i = 2; i * i <= n; i++) {
    if (!f[i]) {
      for (int j = i * i; j <= n; j += i) {
        f[j] = true;
      }
    }
  }
 
}