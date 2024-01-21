/*
	Problem : an array is given. count number of inversion in the array
	inversion : a pair (arr[i],arr[j]) from an inversion when
	i < j and arr[i] > arr[j]
*/

#include<bits/stdc++.h>
using namespace std;

int countInversionsNaive(int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) ++res;
		}
	}

	return res;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans = countInversionsNaive(arr, n);
	cout << ans << endl;

	return 0;
}