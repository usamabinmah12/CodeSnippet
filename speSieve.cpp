const int N = 1e6 + 12;
int spf[N];
void spfSieve()
{
  for (int i = 1; i < N; i++)
  {
    spf[i] = i;
  }
  for (int i = 2; i < N; i++)
  {
    if (spf[i] == i)
    {
      for (int j = i; j < N; j += i)
      {
        spf[j] = min(spf[j], i);
      }
    }
  }
}