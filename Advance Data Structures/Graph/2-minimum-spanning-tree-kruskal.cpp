#include<bits/stdc++.h>
using namespace std;

#define sz 1000
vector<int> adj[sz], cost[sz];
int parent[sz];
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
               greater<pair<int, pair<int, int>>>> pq;


void mst_init() {
	for (int i = 0; i < sz; i++) {
		parent[i] = i;
	}
}

int findParent(int n) {
	if (parent[n] == n) {
		return n;
	}

	return parent[n] = findParent(parent[n]);
}

int mst(int nodes) {
	vector<pair<int, pair<int, int>>> ans;
	int p, q, w, total = 0, u, v;

	for (int i = 0; i < nodes; i++) {
		for (int j = 0; j < adj[i].size(); j++) {
			p = min(i, adj[i][j]);
			q = max(i, adj[i][j]);
			w = cost[i][j];
			pq.push({w, {p, q}});
		}
	}

	while (!pq.empty()) {
		w = pq.top().first;
		p = pq.top().second.first;
		q = pq.top().second.second;
		pq.pop();

		u = findParent(p);
		v = findParent(q);

		if (u != v) {
			ans.push_back({w, {p, q}});
			parent[u] = v;
			total += w;
		}

	}

	cout << "Edge List in MST:\n";

	for (int i = 0; i < ans.size(); i++) {
		w = ans[i].first;
		p = ans[i].second.first;
		q = ans[i].second.second;

		cout << p << " ---> " << q << " : " << w << endl;
	}

	return total;
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

	mst_init();

	int nodes, edges, source, dest, w;
	cin >> nodes >> edges;

	for (int i = 0; i < edges; i++) {
		cin >> source >> dest >> w;
		adj[source].push_back(dest);
		adj[dest].push_back(source);
		cost[source].push_back(w);
		cost[dest].push_back(w);
	}

	cout << "Total Weight = " << mst(nodes);

	return 0;
}

/*
input:
6 9
1 2 2
1 5 1
1 4 1
2 3 3
2 5 2
3 5 1
3 6 5
4 6 2
5 6 3
*/

/*
output:
Edge List in MST:
1 ---> 4 : 1
1 ---> 5 : 1
3 ---> 5 : 1
1 ---> 2 : 2
4 ---> 6 : 2
Total Weight = 7
*/