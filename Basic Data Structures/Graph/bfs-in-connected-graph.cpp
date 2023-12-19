#include<bits/stdc++.h>
using namespace std;

// adjacency list for 100 nodes
vector<int> adj[100];
int visited[100];

void bfs(int source) {
	// making all the nodes unvisited
	fill(visited, visited + 100, 0);
	queue<int> q;
	visited[source] = 1;
	q.push(source);

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		cout << u << " ";

		// pushing all the adjacent nodes to the queue

		for (int v : adj[u]) {
			if (!visited[v]) {
				visited[v] = 1;
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

	int edges;
	cout << "How many edges : " << endl;
	cin >> edges;

	cout << "Enter edges" << endl;

	int x, y;

	for (int i = 0; i < edges; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	cout << "Enter source node" << endl;
	int source;
	cin >> source;
	bfs(source);

	return 0;
}