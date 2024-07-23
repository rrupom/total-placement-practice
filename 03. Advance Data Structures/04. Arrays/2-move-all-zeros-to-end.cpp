#include<bits/stdc++.h>
using namespace std;

void moveToEndNaive(int arr[], int n) {
	// iterate through the array
	// if 0 is found, then swap it with the non zero element

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			for (int j = i + 1; j < n; j++) {
				if (arr[j] != 0) {
					swap(arr[i], arr[j]);
					break;
				}
			}
		}
	}
}

void moveToEndEfficient(int arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			swap(arr[i], arr[count]);
			++count;
		}
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

	moveToEndNaive(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " \n"[i == n - 1];
	}

	moveToEndEfficient(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " \n"[i == n - 1];
	}


	return 0;
}