#include<bits/stdc++.h>
using namespace std;

int sumOfNumbers(int arr[], int low, int high) {
	if (low > high) {
		return 0;
	}

	return arr[low] + sumOfNumbers(arr, low + 1, high);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "How many numbers : " << endl;
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << sumOfNumbers(arr, 0, n - 1);


	return 0;
}