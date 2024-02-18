#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int visited[100];

bool dfsRecursive(int source, int parent) {
	visited[source] = 1;

	for (int node : adj[source]) {
		if (!visited[node]) {
			if (dfsRecursive(node, source)) return true;
		} else if (node != parent) return true;
	}

	return false;
}

bool dfs(int nodes) {
	for (int i = 0; i < nodes; i++) {
		if (!visited[i]) {
			if (dfsRecursive(i, -1)) return true; // parent node of source node is always -1
		}
	}

	return false;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "How many nodes: " << endl;
	int nodes;
	cin >> nodes;

	cout << "How many edges: " << endl;
	int edges;
	cin >> edges;

	cout << "Enter every edges:" << endl;

	int x, y;
	for (int i = 0; i < edges; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	bool hasCycle = dfs(nodes);
	if (hasCycle) cout << "This graph has cycle" << endl;
	else cout << "No cycle detected\n";


	return 0;
}