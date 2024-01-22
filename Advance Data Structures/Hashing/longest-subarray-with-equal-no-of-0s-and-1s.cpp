/*
	Problem : Longest subarry with equal number of 0's ans 1's
	For efficient solution convert evert 0 value with -1. then the problem converts to
	logest subarray with 0 sum
*/

#include<bits/stdc++.h>
using namespace std;

void longestSubArrayEff(vector<int> v) {
	int res = 0;
	int prefix_sum = 0;
	unordered_map<int, int> mp;

	for (int i = 0; i < v.size(); i++) {

		// convert 0 to -1 for use longest subarray with 0 sum strategy
		if (v[i] == 0) {
			prefix_sum += -1;
		} else {
			prefix_sum += v[i];
		}

		if (prefix_sum == 0) {
			// subarray starts with first element
			res = i + 1;
		}
		if (mp.find(prefix_sum) == mp.end()) {
			// storing only the first occurence
			mp[prefix_sum] = i;

		} if (mp.find(prefix_sum) != mp.end()) {

			res = max(res, i - mp[prefix_sum]);
		}
	}

	cout << "Longest subarray length : " << res << endl;
}

void longestSubArrayNaive(vector<int> v) {
	int res = 0;
	for (int i = 0; i < v.size(); i++) {
		int c0 = 0;
		int c1 = 0;
		for (int j = i; j < v.size(); j++) {
			if (v[j] == 0) ++c0;
			else ++c1;

			if (c0 == c1) {
				res = max(res, c0 + c1);
			}
		}
	}

	cout << "Maximum elements subarray length is : " << res << endl;
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
	longestSubArrayNaive(v);
	longestSubArrayEff(v);

	return 0;
}

/*
input:
8
1 0 0 0 1 1 1 1
*/

/*
output:
Maimum elements subarray length is : 6
Longest subarray length : 6
*/