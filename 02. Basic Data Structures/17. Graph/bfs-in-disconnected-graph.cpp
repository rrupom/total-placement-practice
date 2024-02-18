#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int visited[100];

void bfs(int source) {
	fill(visited, visited + 100, 0);
	visited[source] = 1;
	queue<int> q;
	q.push(source);

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		cout << node << " ";

		for (int adjacent : adj[node]) {
			if (!visited[adjacent]) {
				visited[adjacent] = 1;
				q.push(adjacent);
			}
		}
	}

	cout << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "How many nodes" << endl;
	int nodes;
	cin >> nodes;
	int edges;
	cout << "How many edges : " << endl;
	cin >> edges;

	int x, y;
	cout << "Enter the edges" << endl;

	for (int i = 0; i < edges; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	for (int i = 0; i < nodes; i++) {
		if (!visited[i]) {
			bfs(i);
		}
	}

	return 0;
}