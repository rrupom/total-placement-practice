#include<bits/stdc++.h>
using namespace std;

#define sz 1000

int parent[sz], rank[sz];

void initialize(int n) {
	for (int i = 0; i < n; i++) {
		parent[i] = i;
		rank[i] = 0;
	}
}

int findParent(int n) {
	if (parent[n] == n) {
		return n;
	}

	return parent[n] = findParent(parent[n]);
}

void union(int x, int y) {
	int x_parent = findParent(x);
	int y_parent = findParent(y);
	if (x_parent == y_parent) return;

	if (rank[x_parent] > rank[y_parent]) {
		parent[y_parent] = x_parent;
	} else if (rank[y_parent] > rank[x_parent]) {
		parent[y_parent] = x_parent;
	} else {
		parent[y_parent] = x_parent;
		rank[x_parent]++;
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

	initialize(n);


	return 0;
}