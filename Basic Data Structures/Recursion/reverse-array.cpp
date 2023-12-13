#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int i, int j) {
	if (i == j or i > j) return;
	swap(arr[i], arr[j]);
	return reverseArray(arr, i + 1, j - 1);
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

	reverseArray(arr, 0, n - 1);

	for (int i = 0; i < n; i++) cout << arr[i] << " ";


	return 0;
}