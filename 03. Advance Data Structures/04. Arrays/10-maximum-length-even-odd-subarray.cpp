/*
	Problem : maximum length of alternating elements subarray. If the subarray starts with even
	then next element must be odd. If the subarray starts with odd then next element must
	be even. This alternating sequence contines. We have to find the maximum length
	of this alternaing sequence
*/

#include<bits/stdc++.h>
using namespace std;

int maxEvenOddNaive(int arr[], int n) {
	int res = 1;

	for (int i = 0; i < n; i++) {
		int cur = 1;
		for (int j = i + 1; j < n; j++) {
			if ((arr[j] % 2 == 0 and arr[j - 1] % 2 != 0) or (arr[j] % 2 != 0 and arr[j - 1] % 2 == 0)) {
				++cur;
			} else break;
		}

		res = max(res, cur);
	}

	return res;
}

int maxEvenOddEff(int arr[], int n) {
	int res = 1;
	int cur = 1;

	for (int i = 1; i < n; i++) {
		if ((arr[i] % 2 == 0 and arr[i - 1] % 2 != 0) or (arr[i] % 2 != 0 and arr[i - 1] % 2 == 0)) {
			++cur;
			res = max(cur, res);
		} else cur = 1;
	}

	return res;
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

	int ans = maxEvenOddNaive(arr, n);
	cout << ans << endl;

	ans = maxEvenOddEff(arr, n);
	cout << ans << endl;

	return 0;
}