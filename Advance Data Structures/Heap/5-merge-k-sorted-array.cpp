/*
	Problem : given k sorted array as input. return a sorted vector
	input = {
		{10,20,30},
		{5,15},
		{1,9,11,18}
	}

	output = {1,5,9,10,11,15,18,20,30}
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> sortWithMinHeap(vector<vector<int>> &input) {
	priority_queue<int, vector<int>, greater<int> > pq;
	for (int i = 0; i < input.size(); i++) {
		for (int j = 0; j < input[i].size(); j++) {
			pq.push(input[i][j]);
		}
	}

	vector<int> ans;

	while (!pq.empty()) {
		ans.push_back(pq.top());
		pq.pop();
	}

	return ans;
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

	vector<vector<int>> input;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		vector<int> v;
		int sz, x;
		cin >> sz;

		for (int j = 0; j < sz; j++) {
			cin >> x;
			v.push_back(x);
		}

		input.push_back(v);
	}

	vector<int> sorted = sortWithMinHeap(input);

	for (int i = 0; i < sorted.size(); i++) {
		cout << sorted[i] << " ";
	}

	return 0;
}