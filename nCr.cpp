const int N = 30 + 12;
long long nCr[N][N], fact[N];
void prec()
{
    fact[0] = 1;
  for(int n = 0 ; n < N ; n++ ) {
    if(n) {
        fact[n] = fact[n - 1] * n;
    }
    nCr[n][0] = 1;
    for(int r = 1 ;  r  < N ; r++) {
        nCr[n][r] = nCr[n- 1][r - 1] + nCr[n - 1][r];
    }
   }
}