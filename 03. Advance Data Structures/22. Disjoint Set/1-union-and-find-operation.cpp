#include<bits/stdc++.h>
using namespace std;

#define sz 100

int parent[sz];

void initialize(int n) {
	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}
}

int find(int i) {
	if (parent[i] == i) {
		return i;
	}

	return parent[i] = find(parent[i]);
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

	int node = find(2);
	int node2 = find(3);

	if (node != node2) {
		parent[node] = node2;
	}

	cout << find(2) << " " << find(3) << endl;


	return 0;
}