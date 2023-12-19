#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100]; // for adjacency list representation of nodes
int visited[100]; // for keep track of visited nodes
int recursionState[100]; // to check if the node is in recursion stack

bool dfsRecursive(int source) {
	// making source node visited
	visited[source] = 1;

	// making this node active in the recursion call stack
	recursionState[source] = 1;

	for (int node : adj[source]) {

		if (!visited[node] and dfsRecursive(node)) return true;

		// if the adjacent node in visited and active in recursion call stack then it hs cycle
		else if (recursionState[node]) return true;
	}

	// making recursion state off
	recursionState[source] = false;

	return false;
}

bool dfs(int nodes) {
	for (int i = 0; i < nodes; i++) {
		if (!visited[i]) {
			if (dfsRecursive(i)) return true;
		}
	}

	return false;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "How many nodes:" << endl;
	int nodes;
	cin >> nodes;

	cout << "How many number of edges:" << endl;
	int edges;
	cin >> edges;


	int x, y;

	for (int i = 0; i < edges; i++) {
		cin >> x >> y;
		adj[x].push_back(y); // directed graph. only one push
	}

	bool hasCycle = dfs(nodes);

	if (hasCycle) cout << "Cycle detected" << endl;
	else cout << "No cycle detected" << endl;

	return 0;
}