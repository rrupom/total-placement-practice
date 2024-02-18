#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int indegree[100];

bool kahnAlgorithm(int nodes) {
	queue<int> q;

	// push all the nodes with indegree == 0
	for (int i = 0; i < nodes; i++) {
		if (indegree[i] == 0) {
			q.push(i);
		}
	}

	int count = 0;

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		// removing indegree of u by 1
		for (int v : adj[u]) {
			indegree[v]--;
			if (indegree[v] == 0) {
				q.push(v);
			}
		}

		// increment count
		++count;
	}

	return (count != nodes);
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

	bool hasCycle = kahnAlgorithm(nodes);
	if (hasCycle) cout << "Cycle detected" << endl;
	else cout << "No cycle detected" << endl;

	return 0;
}