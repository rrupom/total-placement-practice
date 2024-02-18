#include<bits/stdc++.h>
using namespace std;

bool myCMP(pair<int, int> a, pair<int, int> b) {
	return a.first > b.first;
}

int jobSelection(vector<pair<int, int>> jobs, int maxDeadline) {
	bool slots[maxDeadline];
	int totalProfit  = 0;

	fill(slots, slots + maxDeadline, false);

	for (int i = 0; i < jobs.size(); i++) {
		int d = jobs[i].second;
		int profit = jobs[i].first;

		for (int j = d - 1; j >= 0; j--) {
			if (!slots[j]) {
				slots[j] = true;
				totalProfit += profit;
				break;
			}
		}

	}

	return totalProfit;
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

	vector<pair<int, int>> jobs;

	int n, deadline, profit;
	cin >> n;

	int maxDeadline = INT_MIN;

	for (int i = 0; i < n; i++) {
		cin >> deadline >> profit;
		jobs.push_back({profit, deadline});
		maxDeadline = max(maxDeadline, deadline);
	}

	// sort descending order according to profit
	sort(jobs.begin(), jobs.end(), myCMP);

	cout << "Maximum profit = " << jobSelection(jobs, maxDeadline) << endl;

	return 0;
}

/* Case 1
input:
5
2 100
1 50
2 10
1 20
3 30
*/

/*
output:
Maximum profit = 180
*/