#include<bits/stdc++.h>
using namespace std;

int average(int arr[], int n) {
	if (n == 0) {
		throw string("array is empty");
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	// cout << "Enter the index number you want to show the array element : ";
	int index;
	cin >> index;

	if (index > n) {
		throw - 1;
	}

	cout << "Element at index " << index << " is = " << arr[index - 1] << endl;

	return sum / n;
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

	try {
		int a = average(arr, n);
		cout << "average is = " << a << endl;
	} catch (string s) {
		cout << s << endl;
	} catch (int n) {
		cout << n << endl;
	}

	return 0;
}