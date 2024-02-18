/*
	Problem : An array and sum is given. Find the longest subarray with given sum.
	Suppose array = {5,8,-4,-4,9,-2 2} sum = 0
	It has two subarray with sum 0. {8,-4,-4} and {-2,2}
	But answer will be {8,-4,-4} because it has longest length
*/

#include<bits/stdc++.h>
using namespace std;

void longestSubarrayWithSumEff(vector<int> v, int sum) {
	unordered_map<int, int> mp;
	int prefix_sum = 0;
	int res = 0;

	for (int i = 0; i < v.size(); i++) {
		prefix_sum += v[i];

		if (prefix_sum == sum) {
			// subarray start with first element
			// {1,3,7} sum = 4: res = 2
			res = i + 1;
		}

		if (mp.find(prefix_sum) == mp.end()) {
			// prefix sum is not present. storing the first occurence
			mp.insert({prefix_sum, i});
		}

		if (mp.find(prefix_sum - sum) != mp.end()) {
			res = max(res, i - mp[prefix_sum - sum]);
		}
	}

	cout << "Longest : " << res << endl;
}

void longestSubarrayWithSumNaive(vector<int> v, int sum) {
	int res = 0;
	for (int i = 0; i < v.size(); i++) {
		int s = 0;
		for (int j = i; j < v.size(); j++) {
			s += v[j];
			if (s == sum) {
				res = max(res, j - i + 1);
			}
		}
	}

	cout << "Longest : " << res << endl;
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

	longestSubarrayWithSumNaive(v, sum);
	longestSubarrayWithSumEff(v, sum);


	return 0;
}