/*
	Problem : In sorted array find the last index of target element
*/

#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int arr[], int n, int target) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] > target) {
			high = mid - 1;
		} else if (arr[mid] < target) {
			low = mid + 1;
		} else {
			if (mid == n - 1 or arr[mid] != arr[mid + 1]) return mid;
			else low = mid + 1;
		}
	}

	return -1;
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

	int target;
	cin >> target;
	int ans = lastOccurence(arr, n, target);
	cout << ans << endl;

	return 0;
}