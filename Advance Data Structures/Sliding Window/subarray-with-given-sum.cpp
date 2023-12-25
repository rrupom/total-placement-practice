/*
	Problem : Array and subarray size and sum is given. We need to find if there is any
	subarray with given sum
*/

#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int n, int targetSum) {
	int cur_sum = arr[0];
	int s = 0;

	for (int e = 1; i < n; i++) {
		// clean the previous window
		while (cur_sum > targetSum and s < e - 1) {
			cur_sum -= arr[s++];
		}

		if (cur_sum == targetSum) return true;
		if (e < n) {
			cur_sum += arr[e];
		}
	}

	return cur_sum == targetSum;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int k, targetSum;
	cin >> k >> targetSum;

	bool ans = isPresent(arr, n, targetSum);
	if (ans) cout << "Present\n";
	else cout << "Not present\n";

	return 0;
}