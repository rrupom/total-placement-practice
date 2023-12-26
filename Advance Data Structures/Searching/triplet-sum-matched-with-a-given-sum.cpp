/*
	Problem : Given a sorted array and a sum, fund if there is a triplet with given sum
*/

#include<bits/stdc++.h>
using namespace std;

bool hasPair(int arr[], int left, int right, int sum) {
	while (left < right) {
		if (arr[left] + arr[right] == sum) return true;
		if (arr[left] + arr[right] > sum) right--;
		else left++;
	}

	return false;
}

bool hasTripletSum(int arr[], int n, int sum ) {
	// this method will applicable if the array is sorted
	for (int i = 0; i < n; i++) {
		if (hasPair(arr, i + 1, n - 1, sum - arr[i])) {
			return true;
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

	bool ans = hasTripletSum(arr, n, sum);
	if (ans) cout << "Present\n";
	else cout << "Not present\n";

	// if the array is unsorted, then first sort the array then run this function. Overall
	// complexity will be O(n*n)

	return 0;
}