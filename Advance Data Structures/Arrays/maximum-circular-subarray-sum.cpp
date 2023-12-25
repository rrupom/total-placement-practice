/*
	Problem : maximum of all circular subarray
	Suppose an array is : {10,5,-5}
	then all the subarrays are:
	normal : {10},{5},{-5},{10,5},{5,-5},{10,5,-5}
	circular : {-5,10},{5,-5,10},{-5,10,5}
	among then {10,5} has the maximum value of 15
	we have to find this
*/

#include<bits/stdc++.h>
using namespace std;

int maxCircularSubSum(int arr[], int n) {
	int res = arr[0];

	for (int i = 0; i < n; i++) {
		int cur_sum = arr[i];
		int cur_max = arr[i];

		for (int j = 1; j < n; j++) {
			int index = (i + j) % n;
			cur_sum += arr[index];
			cur_max = max(cur_sum, cur_max);
		}

		res = max(res, cur_max);
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

	int ans = maxCircularSubSum(arr, n);
	cout << ans << endl;

	return 0;
}