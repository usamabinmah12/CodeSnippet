const int N = 1e5 + 12;
int a[N], t[4 * N];
void build(int node, int b, int e)
{
  if (b == e)
  {
    t[node] = a[e];
    return;
  }
  int l = 2 * node, r = 2 * node + 1;
  int mid = (e + b) / 2;
  build(l, b, mid);
  build(r, mid + 1, e);
  t[node] = t[l] + t[r];
}
void update(int node, int b, int e, int i, int value)
{
  if (e < i or b > i)
    return;
  if (b == e and b == i)
  {
    t[node] = value;
    return;
  }
  int mid = (e + b) / 2;
  int l = 2 * node, r = 2 * node + 1;
  update(l, b, mid, i, value);
  update(r, mid + 1, e, i, value);
  t[node] = t[l] + t[r];
}
int query(int node, int b, int e, int i, int j)
{
  if (e < i or j < b)
    return 0;
  if (i <= b and j >= e)
  {
    return t[node];
  }
  int mid = (b + e) / 2;
  int l = 2 * node, r = 2 * node + 1;
  return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}