/*
	Problem : count occurence of an element in sorted array
*/

#include<bits/stdc++.h>
using namespace std;

int fistOccurence(int arr[], int n, int target) {
	int low = 0;
	int high = n - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] > target) {
			high = mid - 1;
		} else if (arr[mid] < target) {
			low = mid + 1;
		} else {
			if (mid == 0 or arr[mid] != arr[mid - 1]) return mid;
			else high = mid - 1;
		}
	}

	return -1;
}

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

int countOccurence(int arr[], int n, int target) {
	int first = fistOccurence(arr, n, target);
	if (first == -1) return 0;
	int last = lastOccurence(arr, n, target);
	return last - first + 1;
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

	int ans = countOccurence(arr, n, target);
	cout << ans << endl;

	return 0;
}