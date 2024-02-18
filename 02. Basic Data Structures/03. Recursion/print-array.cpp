#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int low, int high) {
	if (low > high) {
		return;
	}

	cout << arr[low] << " ";
	printArray(arr, low + 1, high);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "How many array elements :" << std::flush;
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) cin >> arr[i];

	printArray(arr, 0, n - 1);


	return 0;
}