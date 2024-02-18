/*
	Problem : An array and k is given. Find the maximum sum of consequetive k elements
*/

#include<bits/stdc++.h>
using namespace std;

int maxSumWithSlidingWindow(int arr[], int n, int k) {
	// first calculate the sum of the first window
	int cur_sum = 0;
	for (int i = 0; i < k; i++) {
		cur_sum += arr[i];
	}

	int max_sum = cur_sum;

	for (int i = k; i < n; i++) {
		cur_sum += (arr[i] - arr[i - k]);
		max_sum = max(max_sum, cur_sum);
	}

	return max_sum;
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

	int k;
	cin >> k;

	int ans = maxSumWithSlidingWindow(arr, n, k);
	cout << ans << endl;

	return 0;
}