/*
	Problem : Two binary arrays are given. Find the longest span with same sum in two binary arrays
	Example:
	arr1 = [0,1,0,0,0,0]
	arr2 = [1,0,1,0,0,1]
	first two elements of each array [0,1] and [1,0] are same sum and their start and end index are also same
	but [*,1,0,0,0,*] and [*,0,1,0,0,*] is longest subarray

	Solution Approach:
	Make an temporary arry with the difference. Then call the same fanta as
	longest subarray with 0 sum
*/

#include<bits/stdc++.h>
using namespace std;

void longestCommonSpanWithSameSum(vector<int> a, vector<int> b) {
	// making the diffence vector and storing it in a
	for (int i = 0; i < a.size(); i++) {
		a[i] = a[i] - b[i];
	}

	// now the same logic longest subarray with 0 sum
	int res = 0;
	int prefix_sum = 0;
	unordered_map<int, int> mp;

	for (int i = 0; i < a.size(); i++) {
		prefix_sum += a[i];

		if (prefix_sum == 0) {
			res = i + 1;
		}

		if (mp.find(prefix_sum) == mp.end()) {
			// element is not present in the map. now store it
			mp[prefix_sum] = i;
		}
		if (mp.find(prefix_sum) != mp.end()) {
			res = max(res, i - mp[prefix_sum]);
		}
	}

	cout << "Longest common span length : " << res << endl;
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

	vector<int> a;
	vector<int> b;
	takeVectorInput(a);
	takeVectorInput(b);

	longestCommonSpanWithSameSum(a, b);

	return 0;
}

/*
input:
6
0 1 0 0 0 0
6
1 0 1 0 0 1
*/

/*
output:
Longest common span length : 4
*/