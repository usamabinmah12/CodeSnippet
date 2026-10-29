const int N = 1e5 + 12;
int a[N], t[4 * N], lazy[4 * N];

void push(int node, int b, int e)
{
    if (lazy[node] == 0)
        return;
    t[node] = t[node] + (e - b + 1) * lazy[node];
    int l = 2 * node, r = 2 * node + 1;
    if (b != e)
    {
        lazy[l] = lazy[node] + t[l];
        lazy[r] = lazy[node] + t[r];
    }
    lazy[node] = 0;
}

void build(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = a[b];
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = t[l] + t[r];
}
int query(int node, int b, int e, int i, int j)
{
    push(node, b, e);
    if (e < i or b > j)
        return 0;
    if (i <= b and e <= j)
    {
        return t[node];
    }
    int mid = (b + e) / 2;
    int l = 2 * node, r = 2 * node + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
void update(int node, int b, int e, int i, int j, int value)
{
    push(node, b, e);
    if (e < i or j < b)
        return;
    if (i <= b and e <= j)
    {
        lazy[node] = value;
        push(node, b, e);
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * node, r = 2 * node + 1;
    update(l, b, mid, i, j, value);
    update(r, mid + 1, e, i, j, value);
    t[node] = t[l] + t[r];
}