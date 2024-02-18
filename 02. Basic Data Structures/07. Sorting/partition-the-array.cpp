#include<bits/stdc++.h>
using namespace std;

void partitionArray(int arr[], int low, int high, int pIndex) {
	int n = high - low + 1;
	int temp[n];
	int index = 0;

	for (int i = low; i <= high; i++) {
		if (arr[i] <= arr[pIndex]) {
			temp[index++] = arr[i];
		}
	}

	for (int i = low; i <= high; i++) {
		if (arr[i] > arr[pIndex]) {
			temp[index++] = arr[i];
		}
	}

	for (int i = low; i <= high; i++) {
		arr[i] = temp[i - low];
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

	partitionArray(arr, 0, n - 1, 4);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}