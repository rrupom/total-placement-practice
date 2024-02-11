#include<bits/stdc++.h>
using namespace std;

#define sz 1000
#define inf INT_MAX

int cost[sz];

vector<int> adj[sz], weight[sz];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int> > > pq;


void dijkstra_init(int n) {
	for (int i = 0; i < n; i++) {
		cost[i] = inf;
	}
}

int dijkstra(int source, int dest, int n) {
	pq.push({0, source});
	cost[source] = 0;

	int x;

	while (!pq.empty()) {
		x = pq.top().second;
		pq.pop();

		for (int i = 0; i < adj[x].size(); i++) {
			if (cost[ adj[x][i] ] > cost[x] + weight[x][i]) {
				cost[ adj[x][i] ] = cost[x] + weight[x][i];
				pq.push({cost[ adj[x][i] ], adj[x][i]});
			}
		}
	}

	cout << "Printing all nodes minimum value to reach from = " << source << endl;

	for (int i = 0; i < n; i++) {
		cout << cost[i] << " ";
	}

	cout << endl;

	return cost[dest];
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

	int n, m, x, y, c;
	cin >> n >> m;

	dijkstra_init(n);

	for (int i = 0; i < m; i++) {
		cin >> x >> y >> c;
		adj[x].push_back(y);
		adj[y].push_back(x);

		weight[x].push_back(c);
		weight[y].push_back(c);
	}

	cin >> x >> y;
	cout << "minimum distance to go from " << x << " to " << y << " is = " << dijkstra(x, y, n) << endl;


	return 0;
}

/*
Time Complexity: O(ElogV + VlogE)
Space Complexity:
*/

/*
input:
6 9
0 4 100
0 1 25
0 5 7
1 4 2
1 5 7
2 1 2
2 5 8
2 3 1
3 5 3
0 4
*/

/*
output:
Printing all nodes minimum value to reach from = 0
0 13 11 10 15 7
minimum distance to go from 0 to 4 is = 15
*/