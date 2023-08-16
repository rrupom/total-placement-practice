#include<bits/stdc++.h>
using namespace std;

class ArraySizeZeroException {

};

class ArraySizeNegetiveException {

};

int average(int arr[], int n) {
	if (n == 0) throw ArraySizeZeroException();
	if (n < 0) throw ArraySizeNegetiveException();

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum / n;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	try {
		int result = average(arr, n);
		cout << "Average is = " << result << endl;
	} catch (ArraySizeZeroException e) {
		cout << "Array size is zero" << endl;
	} catch (ArraySizeNegetiveException e) {
		cout << "Array size is negetive" << endl;
	}

	return 0;
}