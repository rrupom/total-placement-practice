/*
	Problem : Trap the rain water. Left and right bar can not contain any rain water as
	there is nothing to support this element. To solve this problem we will precalculate the
	left and right max value of array then solve this problem

*/


#include<bits/stdc++.h>
using namespace std;

int trappingRainWater(int arr[], int n) {
	int left[n];
	int right[n];

	left[0] = arr[0];
	right[n - 1] = arr[n - 1];

	for (int i = 1; i < n; i++) {
		left[i] = max(left[i - 1], arr[i]);
	}

	for (int i = n - 2; i >= 0; i--) {
		right[i] = max(right[i + 1], arr[i]);
	}

	int total = 0;

	for (int i = 1; i < n - 1; i++) {
		total += min(left[i], right[i]) - arr[i];
	}

	return total;
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

	int ans = trappingRainWater(arr, n);

	cout << ans << endl;

	return 0;
}