#include<bits/stdc++.h>
using namespace std;

#define sz 1000
#define inf INT_MAX

vector<int> adj[sz], weight[sz];
int cost[sz];

void bellmanFord(int source, int vertices) {
	for (int i = 0; i < vertices; i++) {
		cost[i] = inf;
	}

	cost[source] = 0;

	for (int i = 0; i < vertices - 1; i++) {
		for (int u = 0; u < vertices; u++) {
			for (int j = 0; j < adj[u].size(); j++) {
				int v = adj[u][j];
				int w = weight[u][j];

				if (cost[u] != inf and cost[v] > cost[u] + w) {
					cost[v] = cost[u] + w;
				}
			}
		}
	}

	for (int u = 0; u < vertices; u++) {
		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i];
			int w = weight[u][i];

			if (cost[u] != inf and cost[v] > cost[u] + w) {
				cout << "Graph contains negative weight cycle" << endl;
				return;
			}
		}
	}

	cout << "Shortest distances from source " << source << " : " << endl;

	for (int i = 0; i < vertices; i++) {
		if (cost[i] == inf) {
			cout << "Vertex " << i << " : INF" << endl;
		} else {
			cout << "Vertex " << i << " : " << cost[i] << endl;
		}
	}
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

	int v, e, x, y, c;
	cin >> v >> e;

	for (int i = 0; i < e; i++) {
		cin >> x >> y >> c;
		adj[x].push_back(y);
		weight[x].push_back(c);
	}

	cin >> x;

	bellmanFord(x, v);

	return 0;
}

/*
input:
5 8
0 1 2
0 2 4
1 2 1
1 3 3
2 3 5
2 4 1
3 4 2
4 1 1
0
*/

/*
output:
Shortest distances from source 0 :
Vertex 0 : 0
Vertex 1 : 2
Vertex 2 : 3
Vertex 3 : 5
Vertex 4 : 4
*/