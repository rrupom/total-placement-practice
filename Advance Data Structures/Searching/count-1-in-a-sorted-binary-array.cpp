/*
	Problem : Given sorted arry only contains only 0 and 1. count how many 1's are there
*/

#include<bits/stdc++.h>
using namespace std;

int countOne(int arr[], int n) {
	int low = 0;
	int high = n - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == 0) {
			low = mid + 1;
		} else {
			if (mid == 0 or arr[mid] != arr[mid - 1]) {
				return n - mid;
			} else {
				high = mid - 1;
			}
		}
	}

	return 0;
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

	int ans = countOne(arr, n);
	cout << ans << endl;

	return 0;
}