#include<bits/stdc++.h>
#define sz 1000
#define pb push_back
using namespace std;

vector<int> adj[sz];
bool articulationPoints[sz], visited[sz];
int low[sz], discovery[sz];
int timer = 0; // for time tracking

void findArticulationPoints(int u, int parent) {
	// we need to increment low and discovery time we encounter the node
	low[u] = discovery[u] = ++timer;
	visited[u] = true;
	int child = 0;

	// traverse through the adjacent nodes

	for (int v : adj[u]) {
		if (v == parent) {
			// if the child node is become same as parent, nothing to do
			continue;
		}

		if (visited[v]) {
			// already visited. it is a backedge
			low[u] = min(low[u], discovery[v]);
		} else {
			findArticulationPoints(v, u);
			low[u] = min(low[u], low[v]);
			if (low[v] >= discovery[u] and parent != -1) {
				articulationPoints[u] = true;
			}
			child++;
		}

		if (parent == -1 and child > 1) {
			articulationPoints[u] = true;
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

	int nodes, edges, x, y;
	cin >> nodes >> edges;

	for (int i = 0; i < edges; i++) {
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}

	findArticulationPoints(0, -1);// 0 as the source node. and parent of source node must be -1

	cout << "Node\tdiscovery[i]\tlow[i]\n";

	for (int i = 0; i < nodes; i++) {
		cout << i << "\t" << discovery[i] << "\t" << low[i] << endl;
	}

	cout << "Articulation Points List:\n";

	for (int i = 0; i < nodes; i++) {
		if (articulationPoints[i]) {
			cout << i << " ";
		}
	}


	return 0;
}


/*
input:
12 14
0 1
0 2
1 2
2 3
3 4
6 3
4 5
6 5
7 6
10 11
11 9
9 10
9 8
7 8
*/

/*
output:
Node	discovery[i]	low[i]
 0	           1	       1
 1	           2	       1
 2	           3	       1
 3	           4	       4
 4	           5	       4
 5	           6	       4
 6	           7	       4
 7	           8	       8
 8	           9	       9
 9	           10	       10
 10	           12	       10
 11	           11	       10
Articulation Points List:
2 3 6 7 8 9
*/