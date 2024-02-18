#include<bits/stdc++.h>
using namespace std;

#define sz 1000

int parent[sz];

void initialize(int n) {
	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}
}

int findParentWithoutCompression(int node) {
	if (parent[node] == node) {
		return node;
	}

	return findParentWithoutCompression(parent[node]);
}

int findParentWithCompression(int node) {
	if (parent[node] == node) {
		return node;
	}

	// compress path and might change the tree
	return parent[node] = findParentWithCompression(parent[node]);
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