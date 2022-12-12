#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = (int)2e5 + 5;

int tree[4 * N];
int arr[N];

void build(int at, int b, int e)
{
	if (b == e)
	{
		tree[at] = arr[b];
		return;
	}
	int mid = (b + e) / 2;
	build(2 * at, b, mid);
	build(2 * at + 1, mid + 1, e);
	tree[at] = tree[2 * at] + tree[2 * at + 1];
}

void update(int at, int b, int e, int idx, int val)
{
	if (b == e)
	{
		tree[at] = val;
		return;
	}
	int mid = (b + e) / 2;
	if (idx <= mid)
		update(2 * at, b, mid, idx, val);
	else
		update(2 * at + 1, mid + 1, e, idx, val);
	tree[at] = tree[2 * at] + tree[2 * at + 1];
}

int query(int at, int b, int e, int l, int r)
{
	if (r < b or e < l)
		return 0;
	if (l <= b and e <= r)
		return tree[at];
	int mid = (b + e) / 2;
	int x = query(2 * at, b, mid, l, r);
	int y = query(2 * at + 1, mid + 1, e, l, r);
	return x + y;
}

int32_t main()
{
	int n, q;
	cin >> n >> q;
	for (int i = 1; i <= n; ++i)
		cin >> arr[i];
	build(1, 1, n);
	while (q--)
	{
		int op;
		cin >> op;
		if (op == 1)
		{
			int idx, val;
			cin >> idx >> val;
			update(1, 1, n, idx, val);
		}
		else
		{
			int l, r;
			cin >> l >> r;
			cout << query(1, 1, n, l, r) << "\n";
		}
	}
	return 0;
}
