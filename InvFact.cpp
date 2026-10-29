const int N = 1e6 + 12;
int Fact[N], Ifact[N];
const int mod = 1e9 + 7;
int power(int a, int b)
{
  if (b == 0)
    return 1;
  int curr = power(a, b / 2);
  if (b % 2 == 0)
  {
    return curr * curr % mod;
  }
  else
  {
    return curr * curr % mod * a % mod;
  }
}
void prec()
{
  Fact[0] = 1;
  for (int i = 1; i < N; i++)
  {
    Fact[i] = 1LL * Fact[i - 1] * i % mod;
  }
  Ifact[0] = 1;
  for (int i = 1; i < N; i++)
  {
    Ifact[i] = power(Fact[i], mod - 2);
  }
}
