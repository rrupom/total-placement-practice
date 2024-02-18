/*
	left rotation of array by d
*/

#include<bits/stdc++.h>
using namespace std;

void leftRotation(int arr[], int n, int d) {
	if (d > n) {
		d = n - d;
	}
	reverse(arr, arr + d);
	reverse(arr + d , arr + n);
	reverse(arr, arr + n);
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

	int rotation;
	cin >> rotation;

	leftRotation(arr, n, rotation);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}