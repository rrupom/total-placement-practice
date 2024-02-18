/*
	Problem : two sorted array is given. find the unique union element
*/

#include<bits/stdc++.h>
using namespace std;

void printUnionNaive(int arr[], int brr[], int n, int m) {
	int crr[n + m];
	for (int i = 0; i < n; i++) {
		crr[i] = arr[i];
	}
	for (int i = 0; i < m; i++) {
		crr[i + m] = brr[i];
	}

	// sort the array
	sort(crr, crr + n + m);

	for (int i = 0; i < n + m; i++) {
		// only distinct element
		if (i == 0 or crr[i] != crr[i - 1]) {
			cout << crr[i] << " ";
		}
	}

	cout << endl;
}

void printUnionEff(int arr[], int brr[], int n, int m) {
	// this function is based on the merge function of the merge sort
	int i = 0;
	int j = 0;

	while (i < n and j < m) {
		if (i > 0 and arr[i] == arr[i - 1]) {
			i++;
			continue;
		}
		if (j > 0 and brr[j] == brr[j - 1]) {
			j++;
			continue;
		}
		if (arr[i] < brr[j]) {
			cout << arr[i] << " ";
			i++;
		} else if (arr[i] > brr[j]) {
			cout << brr[j] << " ";
			j++;
		} else {
			// same element
			cout << arr[i] << " ";
			i++, j++;
		}
	}

	while (i < n) {
		// printing rest of the element from the first array
		if (i == 0 or arr[i] != arr[i - 1]) {
			cout << arr[i] << " ";
		}
		i++;
	}

	while (j < m) {
		if (j == 0 or brr[j] != brr[j - 1]) {
			cout << brr[j] << " ";
		}
		j++;
	}

	cout << endl;
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

	int m;
	cin >> m;
	int brr[m];
	for (int i = 0; i < m; i++) {
		cin >> brr[i];
	}

	// printUnionNaive(arr, brr, n, m);
	printUnionEff(arr, brr, n, m);

	return 0;
}