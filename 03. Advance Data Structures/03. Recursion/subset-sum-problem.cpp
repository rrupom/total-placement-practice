// given an array and target sum. We have to count how many subsets with that target sum

#include<bits/stdc++.h>
using namespace std;

int numberOfSubsets(int arr[], int n, int sum) {
	if (n == 0) {
		return (sum == 0) ? 1 : 0;
	}
	return numberOfSubsets(arr, n - 1, sum) + numberOfSubsets(arr, n - 1, sum - arr[n - 1]);
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

	int targetSum;
	cin >> targetSum;

	cout << numberOfSubsets(arr, n, targetSum);

	return 0;
}