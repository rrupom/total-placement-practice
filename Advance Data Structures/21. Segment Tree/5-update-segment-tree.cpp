#include<bits/stdc++.h>
using namespace std;

#define sz 100

int arr[sz], tree[4 * sz];

int buildSegmentTree(int s, int e, int ind) {
	if (s == e) {
		tree[ind] = arr[s];
		return tree[ind];
	}

	int mid = (s + e) / 2;
	tree[ind] = buildSegmentTree(s, mid, 2 * ind + 1) + buildSegmentTree(mid + 1, e, 2 * ind + 2);

	return tree[mid];
}

int querySegmentTree(int qs, int qe, int s, int e, int ind) {
	if (e<qs or s>qe) return 0;
	if (s >= qs and e <= qe) return tree[ind];
	else {
		int mid = (s + e) / 2;
		return querySegmentTree(qs, qe, s, mid, 2 * ind + 1) + querySegmentTree(qs, qe, mid + 1, e, 2 * ind + 2);
	}
}

void updateSegmentTree(int s, int e, int ind, int i, int diff) {
	if (i<s or i>e) return;
	tree[ind] += diff;

	// if current tree has a subtree. Only update the subtree greater than current node index
	if (e > s) {
		int mid = (s + e) / 2;
		updateSegmentTree(s, mid, 2 * ind + 1, i, diff); // left subtree update
		updateSegmentTree(mid + 1, e, 2 * ind + 2, i, diff); // right subtree update
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
		int qtype;
		int diff;
		cin >> qtype;

		switch (qtype) {
		case 1:
			int qs, qe;
			cin >> qs >> qe;
			cout << querySegmentTree(qs, qe, 0, n - 1, 0) << endl;
			break;
		case 2:
			int index, newValue;
			cin >> index >> newValue;
			diff = newValue - arr[index];
			updateSegmentTree(0, n - 1, 0, index, diff);
			break;
		default:
			cout << "input correct query type\n";
			break;
		}
	}


	return 0;
}

/*
input:
4
10 20 30 40
3
1
0 2
2
1 50
1
0 2
*/

/*
output:
60
90
*/