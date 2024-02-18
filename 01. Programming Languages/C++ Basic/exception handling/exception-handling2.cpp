#include<bits/stdc++.h>
using namespace std;

int average(int arr[], int n) throw(string) {
	// it is the best practice to include throw statement if there any possibility to throw error
	// if there are multiple throw they can be written in comma separated mannaer
	if (n == 0) {
		throw string("array size is zero");
	}

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

	int arr[] = {4, 5, 2};
	int n = 0;

	try {
		int result = average(arr, n);
		cout << result << endl;
	}
	catch (string message) {
		cout << message << endl;
	}

	return 0;
}