#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int visited[100];
stack<int> st; // for storing nodes

void dfsRecursive(int source) {
	visited[source] = 1;

	for (int node : adj[source]) {
		if (!visited[node]) {
			// making recursive call to reach the last reachable node
			dfsRecursive(node);
		}
	}

	st.push(source);
}

void topoSortDFS(int nodes) {
	for (int i = 0; i < nodes; i++) {
		if (!visited[i]) {
			dfsRecursive(i);
		}
	}

	// now all the nodes are in the stack

	while (!st.empty()) {
		int node = st.top();
		cout << node << " ";
		st.pop();
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

	cout << "How many number of edges:" << endl;
	int edges;
	cin >> edges;

	int x, y;

	for (int i = 0; i < edges; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
	}

	topoSortDFS(nodes);

	return 0;
}