/*
	Problem : There is a binary array consisting of 1 and 0. Count maximum number of
	consecutive one
*/

#include<bits/stdc++.h>
using namespace std;

int maximumConsesutiveOneNaive(int arr[], int n) {
	int res = 0;

	for (int i = 0; i < n; i++) {
		int cur = 0;
		for (int j = i; j < n; j++) {
			if (arr[j] == 1) ++cur;
			else break;
		}
		res = max(res, cur);
	}

	return res;
}

int maximumConsesutiveOneEfficient(int arr[], int n) {
	int res = 0;
	int cur = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			cur = 0;
		} else {
			++cur;
			res = max(res, cur);
		}
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

	int ans = maximumConsesutiveOneNaive(arr, n);
	cout << ans << endl;

	ans = maximumConsesutiveOneEfficient(arr, n);
	cout << ans << endl;

	return 0;
}