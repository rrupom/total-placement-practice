/*
	Problem : A given array is sorted and rotated. Find the index of the gievn element
*/

#include<bits/stdc++.h>
using namespace std;

int findIndex(int arr[], int n, int target) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) return mid;
		if (arr[low] < arr[mid]) {
			// left half is sorted
			if (target >= arr[low] and target < arr[mid]) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		} else {
			// right half is sorted
			if (target > arr[mid] and target <= arr[high]) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
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

	int index = findIndex(arr, n, target);
	cout << index << endl;


	return 0;
}