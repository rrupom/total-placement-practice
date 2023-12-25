/*
	Problem : Maximum value of arr[j] - arr[i] such that j > i
*/

#include<bits/stdc++.h>
using namespace std;

void findDiffereneNaive(int arr[], int n) {
	int res = arr[1] - arr[0];

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			res = max(arr[j] - arr[i], res);
		}
	}

	cout << res << endl;
}

void findDifferenceEfficient(int arr[], int n) {
	int mn = arr[0];
	int res = arr[1] - arr[0];

	for (int j = 1; j < n; j++) {
		res = max(res, arr[j] - mn);
		mn = min(mn, arr[j]);
	}

	cout << res << endl;
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

	findDiffereneNaive(arr, n);
	findDifferenceEfficient(arr, n);

	return 0;
}