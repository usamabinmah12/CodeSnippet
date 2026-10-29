const int N = 2e6 + 12;
const int p1 = 127, p2 = 131, mod1 = 1e9 + 7, mod2 = 1e9 + 9;
pair<int,int> pw[N] , ipw[N];
int power(int a , int b , int mod) {

  if(b == 0) return 1;
  int c = power(a , b/2 , mod);
  if(b % 2 == 1) return (1LL * c * c) % mod * a % mod;
  else return (1LL * c * c) % mod;
}
void prec() {
  pw[0] = {1 , 1};
  for(int i = 1 ; i < N ; i++) {
    pw[i].first = 1LL * p1 * pw[i - 1].first % mod1;
    pw[i].second = 1LL * p2 * pw[i - 1].second % mod2;

  }
  ipw[0] = {1  , 1};
  int ip1 = power(p1 , mod1 - 2 , mod1);
  int ip2 = power(p2 , mod2 - 2 , mod2);
  for(int i = 1 ; i < N ; i++) {
    ipw[i].first = 1LL * ip1 * ipw[i - 1].first % mod1;
    ipw[i].second = 1LL * ip2 * ipw[i - 1].second % mod2;

  }
}

pair<int, int> string_hash(const string &s) {
  int n = s.size();
  pair<int, int> hs = {0, 0};
  for (int i = 0; i < n; i++) {
    hs.first = (hs.first + 1LL * s[i] * pw[i].first % mod1) % mod1;
    hs.second = (hs.second + 1LL * s[i] * pw[i].second % mod2) % mod2;
  }
  return hs;
}

pair <int, int> prefix[N];
void build(string &s) {
  int n = s.size();
  //prefix[0] = {0 , 0};
  for(int i = 0 ; i < n; i++) {
    prefix[i].first = 1LL * s[i] * pw[i].first % mod1;
    if(i) prefix[i].first  = (prefix[i].first + prefix[i - 1].first)  % mod1 ;
    prefix[i].second = 1LL * s[i] * pw[i].second % mod2;
    if(i) prefix[i].second  = (prefix[i].second + prefix[i - 1].second ) % mod2  ;
  }
}
pair<int, int> get_hash(int i , int j) {
  assert(i <= j);
  pair <int , int> hs;
  hs.first = prefix[j].first;
  if(i) hs.first = (hs.first - prefix[i - 1].first + mod1) % mod1;
  hs.first = 1LL * hs.first * ipw[i].first % mod1;
  hs.second = prefix[j].second;
  if(i) hs.second = (hs.second - prefix[i - 1].second + mod2) % mod2;
  hs.second = 1LL * hs.second * ipw[i].second % mod2;
  return hs;

}