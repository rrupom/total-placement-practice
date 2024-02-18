#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int visited[100];

void dfs(int source) {
	visited[source] = 1;
	cout << source << " ";

	for (int node : adj[source]) {
		if (!visited[node]) {
			dfs(node);
		}
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "How many nodes:" << endl;
	int nodes;
	cin >> nodes;
	int edges;
	cout << "How many edges: " << endl;
	cin >> edges;

	int x, y;
	cout << "Enter the edges: " << endl;

	for (int i = 0; i < edges; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	cout << "Enter the source node: " << endl;
	int source;
	cin >> source;

	dfs(source);

	return 0;
}