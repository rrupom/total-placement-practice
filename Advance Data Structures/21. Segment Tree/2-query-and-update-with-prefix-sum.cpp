#include<bits/stdc++.h>
using namespace std;

int getSum(int prefix_sum[], int qs, int qe) {
	if (qs == 0) {
		return prefix_sum[qe];
	}

	return prefix_sum[qe] - prefix_sum[qs - 1];
}

void update(int prefix_sum[], int arr[], int n, int idx, int newValue) {
	int diff = newValue - arr[idx];

	for (int i = idx; i < n; i++) {
		prefix_sum[i] += diff;
	}
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

	int prefix_sum[n];

	prefix_sum[0] = arr[0];

	for (int i = 1; i < n; i++) {
		prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	}

	cout << getSum(prefix_sum, 0, 2) << endl;
	cout << getSum(prefix_sum, 1, 3) << endl;

	update(prefix_sum, arr, n, 1, 60);

	cout << getSum(prefix_sum, 0, 1) << endl;


	return 0;
}