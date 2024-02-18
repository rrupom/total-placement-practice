#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int indegree[100];

void topologicalSort(int nodes) {
	queue<int> q;

	// storing all the nodes with indegree 0 in the queue

	for (int i = 0; i < nodes; i++) {
		if (indegree[i] == 0) {
			q.push(i);
		}
	}

	while (!q.empty()) {
		int u = q.front();
		cout << u << " ";
		q.pop();

		for (int v : adj[u]) {
			indegree[v]--;
			if (indegree[v] == 0) {
				q.push(v);
			}
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

	cout << "How many number of edges:" << endl;
	int edges;
	cin >> edges;

	int x, y;

	cout << "Enter every edge:" << endl;

	for (int i = 0; i < edges; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		indegree[y]++;
	}

	topologicalSort(nodes);

	return 0;
}