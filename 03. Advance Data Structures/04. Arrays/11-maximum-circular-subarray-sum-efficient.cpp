/*
	Problem : Find maximum sum of cirular subarray
	Idea: Take the maximum of the following two
		1. Maximum Sum of a Normal Subarray (Easy: Kadane's Algorithm)
		2. Maximum Sub of a Circular Subarray
*/

#include<bits/stdc++.h>
using namespace std;

int normalMaxSum(int arr[], int n) {
	int res = arr[0];
	int maxEnding = arr[0];

	for (int i = 1; i < n; i++) {
		maxEnding = max(maxEnding + arr[i], arr[i]);
		res = max(maxEnding, res);
	}

	return res;
}

int overallMaxSum(int arr[], int n) {

	int max_normal = normalMaxSum(arr, n);

	// all the elements are negetive. So this is the maximum sum possible.
	if (max_normal < 0) return max_normal;
	/**
	 * Importance of this condition
	 * Suppose arr[] = {-5, -3}
	 * max_normal = -3
	 * arr_sum = -8, 
	 * converted array arr[] = {5, 3}
	 * max_circular_sum = 8 - 8 = 0
	 * so result will be max(0, -3) => 0 (incorrect result)
	 * so this condition is optimizing out code and also giving the correct result
	 */

	int arr_sum = 0;
	for (int i = 0; i < n; i++) {
		arr_sum += arr[i];
		arr[i] = -arr[i]; // inverting element to find the min sum using the same function
	}
	// here we add result of normalMaxSum because it is the negate result of inverted array
	int max_circular = arr_sum + normalMaxSum(arr, n);

	return max(max_normal, max_circular);
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

	int ans = overallMaxSum(arr, n);

	cout << ans << endl;


	return 0;
}