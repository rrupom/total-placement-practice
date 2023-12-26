/*
	Problem : An array is given and we need to find the index of first occurence in the sorted
	way
*/

#include<bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int arr[], int low, int high, int target) {
	if (low > high) return -1;
	int mid = (low + high) / 2;
	if (arr[mid] < target) {
		binarySearchRecursive(arr, mid + 1, high, target);
	} else if (arr[mid] > target) {
		binarySearchRecursive(arr, low, mid - 1, target);
	} else {
		if (mid == 0 or arr[mid] != arr[mid - 1]) return mid;
		else binarySearchRecursive(arr, low, mid - 1, target);
	}
}

int binarySearchIterative(int arr[], int n, int target) {
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

	int index = binarySearchRecursive(arr, 0, n - 1, target);
	cout << index << endl;

	index = binarySearchIterative(arr, n, target);
	cout << index << endl;

	return 0;
}