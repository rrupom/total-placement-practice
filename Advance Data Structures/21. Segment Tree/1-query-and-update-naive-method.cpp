#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[], int qs, int qe) {
	int sum = 0;
	for (int i = qs; i <= qe; i++) {
		sum += arr[i];
	}

	return sum;
}

void update(int arr[], int i, int newValue) {
	arr[i] = newValue;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("E:/Codes/input.txt", "r", stdin);
	freopen("E:/Codes/output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << getSum(arr, 0, 2) << endl;
	cout << getSum(arr, 1, 3) << endl;

	update(arr, 1, 60);

	cout << getSum(arr, 0, 2) << endl;


	return 0;
}