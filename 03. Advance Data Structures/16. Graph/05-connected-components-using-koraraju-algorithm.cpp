#include<bits/stdc++.h>
using namespace std;

#define sz 1000

vector<int> adj[sz], transposed[sz];
bool visited[sz];

void dfs(int source) {
	visited[source] = true;

	for (int node : transposed[source]) {
		if (!visited[node]) {
			dfs(node);
		}
	}

	cout << source << " ";
}

void nodeOrderingUsingDFS(stack<int> &st, int source) {
	visited[source] = true;

	for (int i : adj[source]) {
		if (!visited[i]) {
			nodeOrderingUsingDFS(st, i);
		}
	}

	st.push(source);
}
void kosarajuUsingDoubleDFS(int vertices) {
	stack<int> st;

	for (int i = 0; i < vertices; i++) {
		if (!visited[i]) {
			nodeOrderingUsingDFS(st, i);
		}
	}


	for (int i = 0; i < vertices; i++) {
		for (int j : adj[i]) {
			transposed[j].push_back(i);
		}
	}

	fill(visited, visited + sz, false);

	while (!st.empty()) {
		int v = st.top();
		st.pop();

		if (!visited[v]) {
			dfs(v);
			cout << endl;
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

	int vertices, edges, x, y;
	cin >> vertices >> edges;

	for (int i = 0; i < edges; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
	}

	kosarajuUsingDoubleDFS(vertices);

	return 0;
}

/*
input:
5 5
0 1
2 0
1 2
1 3
3 4
*/

/*
output:
1 2 0
3
4
*/