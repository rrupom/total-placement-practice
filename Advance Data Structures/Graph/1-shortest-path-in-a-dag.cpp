#include<bits/stdc++.h>
using namespace std;

#define N 100

vector<pair<int, int>> adj[N];
int indegree[N];


vector<int> topoSort(int vertices) {
	vector<int> ans;
	queue<int> q;

	for (int i = 0; i < vertices; i++) {
		if (indegree[i] == 0) {
			q.push(i);
		}
	}

	while (!q.empty()) {
		int node = q.front();
		ans.push_back(node);
		q.pop();

		for (auto it : adj[node]) {
			indegree[it.first]--;
			if (indegree[it.first] == 0) {
				q.push(it.first);
			}
		}
	}

	return ans;
}

void shortesPathInDAG(int source, int vertices) {
	int dist[N];

	fill(dist, dist + N, 100);

	dist[source] = 0;

	vector<int> topoSortNodes = topoSort(vertices);

	// for (int i = 0; i < topoSortNodes.size(); i++) {
	// 	cout << topoSortNodes[i] << " ";
	// }

	for (int i = 0; i < topoSortNodes.size(); i++) {

		for (auto it : adj[i]) {
			int currentNode = it.first;
			int weightFromSource = it.second;

			if (dist[currentNode] > dist[i] + weightFromSource) {
				dist[currentNode] = dist[i] + weightFromSource;
			}
		}

	}

	cout << "The shortest distance of every node from source : " << source << endl;

	for (int i = 0; i < vertices; i++) {
		cout << dist[i] << " ";
	}
	cout << endl;
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

	int vertices;
	int edges;
	cin >> vertices;

	cin >> edges;


	int from, to, weight;

	for (int i = 0; i < edges; i++) {
		cin >> from >> to >> weight;
		adj[from].push_back({to, weight});
		indegree[to]++;
	}

	int source;
	cin >> source;

	shortesPathInDAG(source, vertices);


	return 0;
}

/*
Time Complexity: O(V+E)
Space Complexity: O(V)
*/

/*
input:
Sample Input 1:
6
7
0 1 2
1 2 3
0 4 1
2 3 6
4 5 4
4 2 2
5 3 1
0
*/

/*
output:
Sample Output 1:
The shortest distance of every node from source : 0
0 2 3 6 1 5
*/

/*
input: Sample Input 2
4
4
0 1 1
1 2 3
2 3 4
1 3 2
1
*/

/*
output: Sample Output 2
The shortest distance of every node from source : 1
100 0 3 2
*/