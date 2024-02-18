#include<bits/stdc++.h>
using namespace std;

#define sz 100
int arr[sz];
int tree[4 * sz];

int buildSegmentTree(int s, int e, int ind) {
	if (s == e) {
		tree[ind] = arr[s];
		return tree[ind];
	}

	int mid = (s + e) / 2;
	tree[ind] = buildSegmentTree(s, mid, 2 * ind + 1) + buildSegmentTree(mid + 1, e, 2 * ind + 2);
	return tree[ind];
}

int querySegmentTree(int qs, int qe, int s, int e, int ind) {
	if (e < qs or s > qe ) return 0;
	if (s >= qs and e <= qe) return tree[ind];
	else {
		int mid = (s + e) / 2;
		return querySegmentTree(qs, qe, s, mid, 2 * ind + 1) + querySegmentTree(qs, qe, mid + 1, e, 2 * ind + 2);
	}
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

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	buildSegmentTree(0, n - 1, 0);

	int q;
	cin >> q;

	while (q--) {
		int qs, qe;
		cin >> qs >> qe;

		cout << querySegmentTree(qs, qe, 0, n - 1, 0) << endl;
	}


	return 0;
}

/*
Time Complexity: O(log n)
Space Complexity: O(log n)
*/

/*
input:
4
10 20 30 40
3
0 2
1 3
0 3
*/

/*
output:
60
90
100
*/