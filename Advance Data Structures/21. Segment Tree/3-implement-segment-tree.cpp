#include<bits/stdc++.h>
using namespace std;

#define sz 100

int tree[4 * sz];

void printSegmentTree(int n) {
	for (int i = 0; i < 4 * n; i++) {
		cout << tree[i] << " ";
	}
}

int buildSegmentTree(vector<int> v, int ss, int se, int si) {
	if (ss == se) {
		tree[si] = v[ss];
		return tree[si];
	}

	int mid = (ss + se) / 2;
	tree[si] = buildSegmentTree(v, ss, mid , 2 * si + 1) + buildSegmentTree(v, mid + 1, se, 2 * si + 2);
	return tree[si];
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("E:/Codes/input.txt", "r", stdin);
	freopen("E:/Codes/output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	buildSegmentTree(v, 0, n - 1, 0);

	printSegmentTree(n);


	return 0;
}