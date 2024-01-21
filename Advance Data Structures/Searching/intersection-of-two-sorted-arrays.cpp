/*
	Problem : two sorted array is given. find the intersection elements (no duplicate)
*/

#include<bits/stdc++.h>
using namespace std;

void intersectionNaive(int arr[], int brr[], int n, int m) {
	for (int i = 0; i < n; i++) {
		if (i > 0 and arr[i] == arr[i - 1]) continue;
		else {
			for (int j = 0; j < m; j++) {
				if (arr[i] == brr[j]) {
					cout << arr[i] << " ";
					break;
				}
			}
		}
	}
	cout << endl;
}

void intersectionEff(int arr[], int brr[], int n, int m) {
	int i = 0;
	int j = 0;

	while (i < n and j < m) {
		// iterative through the distinct elements in the first array
		if (i > 0 and arr[i] == arr[i - 1]) {
			i++;
			continue;
		} else if (arr[i] > brr[j]) {
			j++;
		} else if (arr[i] < brr[j]) {
			i++;
		} else {
			// two elements are same
			cout << arr[i] << " ";
			i++, j++;
		}
	}
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

	intersectionNaive(arr, brr, n, m);
	intersectionEff(arr, brr, n, m);

	return 0;
}