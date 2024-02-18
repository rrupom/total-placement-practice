#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
	int n = mid - low + 1;
	int m = high - mid;

	int left[n];
	int right[m];

	for (int i = 0; i < n; i++) {
		left[i] = arr[i + low];
	}

	for (int i = 0; i < m; i++) {
		right[i] = arr[i + mid + 1];
	}

	int i = 0;
	int j = 0;
	int k = low;

	while (i < n and j < m) {
		if (left[i] <= right[j]) {
			arr[k++] = left[i++];
		} else {
			arr[k++] = right[j++];
		}
	}

	while (i < n) {
		arr[k++] = left[i++];
	}
	while (j < m) {
		arr[k++] = right[j++];
	}
}

void mergeSort(int arr[], int low, int high) {
	if (low < high) {
		int mid = low + (high - low) / 2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
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

	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}