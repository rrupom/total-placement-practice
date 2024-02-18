/*
	Problem : An array and sum is given. Search if any subarray present with the given sum
	Solution Approach:
	Make prefix sum and search in the set for prefix_sum - sum. One case should be handle manually. If the current prefix_sum
	is equal to sum, then it is also a valid ans
*/

#include<bits/stdc++.h>
using namespace std;

void subarrayWithGivenSum(vector<int> v, int sum) {
	int prefix_sum = 0;
	unordered_set<int> s;

	for (int i = 0; i < v.size(); i++) {
		prefix_sum += v[i];

		if (prefix_sum == sum) {
			// subarray from the first element
			cout << "Found\n";
			return;
		}

		if (s.find(prefix_sum - sum) != s.end()) {
			cout << "Found\n";
			return;
		}

		s.insert(prefix_sum);
	}

	cout << "Not Found\n";
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
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> v;
	takeVectorInput(v);

	int sum;
	cin >> sum;

	subarrayWithGivenSum(v, sum);

	return 0;
}