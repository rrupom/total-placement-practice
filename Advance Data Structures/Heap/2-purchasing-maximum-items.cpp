/*
	Problem : costs = {1,12,5,111,200}
	sum = 10
	output: 2
*/

#include<bits/stdc++.h>
using namespace std;

int maximumPurchasingSorting(vector<int> a, int sum) {
	// sorting
	sort(a.begin(), a.end());
	int count = 0;

	for (int i = 0; i < a.size(); i++) {
		if (a[i] <= sum) {
			++count;
			sum -= a[i];
		}
	}

	return count;
}

int maximumPurchasingPriorityQueue(vector<int> a, int sum) {
	priority_queue<int, vector<int>, greater<int> > minQ;

	for (int i = 0; i < a.size(); i++) {
		minQ.push(a[i]);
	}

	int count = 0;

	while (!minQ.empty()) {
		if (minQ.top() <= sum) {
			++count;
			minQ.pop();
		} else break;
	}

	return count;
}

void takeVectorInput(vector<int> &a) {
	int n, x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> a;
	takeVectorInput(a);

	int sum;
	cin >> sum;

	cout << maximumPurchasingSorting(a, sum) << endl;
	cout << maximumPurchasingPriorityQueue(a, sum) << endl;

	return 0;
}