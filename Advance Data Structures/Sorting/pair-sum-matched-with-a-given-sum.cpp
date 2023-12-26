/*
	Problem : Given an array ans a number x, we need to find if there is a pair
	in the array with sum equals to given sum
	Example: {3,5,9,2,8,10,11} sum = 17
	there is {9,8} pair whose sum is also 17
*/

#include<bits/stdc++.h>
using namespace std;

bool hasPairSumEqualsSum(int arr[], int n, int sum) {
	// this is the best solution when the given array is unsorted
	unordered_map<int, bool> mp;

	for (int i = 0; i < n; i++) {
		if (mp[sum - arr[i]]) {
			return true;
		} else {
			mp[arr[i]] = true;
		}
	}

	return false;
}

bool hasPairWithSortedArray(int arr[], int n, int sum) {
	// this method will work when array is sorted

	int left = 0;
	int right = n - 1;
	while (left < right) {
		if (arr[left] + arr[right] == sum) {
			return true;
		} else if (arr[left] + arr[right] > sum) {
			right--;
		} else {
			left++;
		}
	}

	return false;
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

	int sum;
	cin >> sum;

	bool ans = hasPairSumEqualsSum(arr, n, sum);
	ans = hasPairWithSortedArray(arr, n, sum);
	if (ans) cout << "Present\n";
	else cout << "Not present\n";

	return 0;
}