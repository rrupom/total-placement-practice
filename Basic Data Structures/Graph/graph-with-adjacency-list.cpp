#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<int> adj[]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < adj[i].size(); j++) {
			cout << adj[i][j] << " ";
		}
		cout << endl;
	}
}

void printGraph2(vector<int> adj[], int v) {
	for (int i = 0; i < v; i++) {
		for (int x : adj[i]) {
			cout << x << " ";
		}
		cout << "\n";
	}
}

void addEdge(vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int v = 4;
	vector<int> adj[v];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	printGraph(adj);
	printGraph2(adj, v);
	return 0;
}