/*
	Problem : An array is given. Find if the array has any subarray with 0 sum.
	Subarray is a continuous array elements. Even a single 0 is also a subarray

	Solution approach:
	Make an prefix sum array. If at any point of array element is repeating then there is a subarray with sum 0.
	One exceptional case that is not handled by above approach is at any point prefix sum can be 0. It is also a subarray with 0 sum
*/

#include<bits/stdc++.h>
using namespace std;

void subarrayWithZeroSum(vector<int> a) {
	int prefix_sum = 0;
	unordered_set<int> s;
	bool flag = false;

	for (int i = 0; i < a.size(); i++) {
		prefix_sum += a[i];

		if (s.find(prefix_sum) != s.end()) {
			flag = true;
			break;
		}

		// when prefix_sum == 0. It is also a subarray with 0 sum
		// {3, -2,, -1} => {3,1,0}
		if (prefix_sum == 0) {
			flag = true;
			break;
		}

		s.insert(prefix_sum);
	}

	if (flag) cout << "Found\n";
	else cout << "Not found\n";
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
	takeVectorInput(a);
	subarrayWithZeroSum(a);

	return 0;
}

/*
input:
6
1 4 13 -2 -10 5
*/

/*
output:
Not found
*/
