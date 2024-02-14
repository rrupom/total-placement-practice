#include<bits/stdc++.h>
#define sz 1000
using namespace std;

vector<pair<int, int>> articulationBridges;
vector<int> adj[sz];
bool visited[sz];
int discovery[sz], low[sz];
int timer;

void findArticulationBridges(int u, int parent) {
	discovery[u] = low[u] = ++timer;
	visited[u] = true;

	for (int v : adj[u]) {
		if (v == parent) {
			continue;
		}

		if (visited[v]) {
			// back edge. update low-link
			low[u] = min(low[u], discovery[v]);
		}

		else {
			findArticulationBridges(v, u);
			// update low-link
			low[u] = min(low[u], low[v]);

			if (low[v] > discovery[u]) {
				articulationBridges.push_back({u, v});
			}
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
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	findArticulationBridges(0, -1);

	cout << "Node\tDTime\tLow\n";

	for (int i = 0; i < nodes; i++) {
		cout << i << "\t\t" << discovery[i] << "\t\t" << low[i] << endl;
	}

	cout << "Articulation Bridges\n";

	sort(articulationBridges.begin(), articulationBridges.end());

	for (auto it : articulationBridges) {
		cout << it.first << " " << it.second << endl;
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
Node	DTime	Low
0		1		1
1		2		1
2		3		1
3		4		4
4		5		4
5		6		4
6		7		4
7		8		8
8		9		9
9		10		10
10		12		10
11		11		10
Articulation Bridges
2 3
6 7
7 8
8 9
*/

/*
input:
12 15
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
10 4
*/

/*
output:
Node	DTime	Low
0		1		1
1		2		1
2		3		1
3		4		4
4		5		4
5		6		4
6		7		4
7		8		5
8		9		5
9		10		5
10		12		5
11		11		5
Articulation Bridges
2 3
*/

/*
input:
7 7
0 1
0 2
0 3
1 2
3 6
2 4
5 4
*/

/*
output:
Node	DTime	Low
0		1		1
1		2		1
2		3		1
3		6		6
4		4		4
5		5		5
6		7		7
Articulation Bridges
0 3
2 4
3 6
4 5

*/