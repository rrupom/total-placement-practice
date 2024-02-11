#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX

class Edge {

public:
	int from;
	int to;
	int weight;
};

void bellmanFord(int source, vector<Edge> &edgesList, int vertices) {
	vector<int> dist(vertices, inf);

	dist[source] = 0;

	for (int i = 0; i < vertices - 1; i++) {
		for (const Edge& edge : edgesList) {
			if (dist[edge.from] != inf and dist[edge.to] > dist[edge.from] + edge.weight) {
				dist[edge.to] = dist[edge.from] + edge.weight;
			}
		}
	}

	// check for negative cycle

	for (const Edge& edge : edgesList) {
		if (dist[edge.from] != inf and dist[edge.to] > dist[edge.from] + edge.weight) {
			cout << "Graph contains a negative weight cycle" << endl;
			return;
		}
	}

	cout << "Shortest distances from source " << source << ":" << endl;

	for (int i = 0; i < vertices; i++) {
		if (dist[i] == inf) {
			cout << "Vertex " << i << ": INF" << endl;
		} else {
			cout << "Vertex " << i << ": " << dist[i] << endl;
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

	int vertices, edges;
	cin >> vertices >> edges;

	vector<Edge> edgesList(edges);

	for (int i = 0; i < edges; i++) {
		cin >> edgesList[i].from >> edgesList[i].to >> edgesList[i].weight;
	}

	int source;
	cin >> source;

	bellmanFord(source, edgesList, vertices);

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
Shortest distances from source 0:
Vertex 0: 0
Vertex 1: 2
Vertex 2: 3
Vertex 3: 5
Vertex 4: 4
*/