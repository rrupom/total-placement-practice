/*
	Problem : find the maximum sum of subarray
*/

#include<bits/stdc++.h>
using namespace std;

int maximumSubarraySumNaive(int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		int cur = 0;
		for (int j = i; j < n; j++) {
			cur += arr[j];
			res = max(res, cur);
		}
	}

	return res;
}

int maximumSubarraySumEff(int arr[], int n) {
	int res = arr[0];
	int maxEnding = arr[0];

	for (int i = 1; i < n; i++) {
		maxEnding = max(maxEnding + arr[i], arr[i]);
		res = max(res, maxEnding);
	}

	return res;
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

	int ans = maximumSubarraySumNaive(arr, n);
	cout << ans << endl;

	ans = maximumSubarraySumEff(arr, n);
	cout << ans << endl;

	return 0;
}