/*
	Problem : find index of an majority element
	Majority Element is the element which each more than arr_size / 2 time
*/

#include<bits/stdc++.h>
using namespace std;

int findMajorityNaive(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = i; j < n; j++) {
			if (arr[j] == arr[i]) ++count;
		}

		if (count > n / 2) return i;
	}

	return -1;
}

int findMajorityEff(int arr[], int n) {
	// this algorithm is called is moore's majority voting algorithm
	// this algorithm works in two phase. First phase gives the index of the majority element
	// it may be the middle index or any other. but element will be that index element
	// assume that first element is the majority element
	// so that index will be 0 and count will be 1

	int count = 1;
	int index = 0;

	for (int i = 1; i < n; i++) {
		if (arr[index] == arr[i]) {
			++count;
		} else {
			--count;
		}

		if (count == 0) {
			// resetting the element and index
			index = i;
			count = 1;
		}
	}

	count = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[index]) {
			++count;
		}
	}

	if (count > n / 2) return index;
	return -1;
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

	int ans = findMajorityNaive(arr, n);
	cout << ans << endl;

	ans = findMajorityEff(arr, n);
	cout << ans << endl;

	return 0;
}