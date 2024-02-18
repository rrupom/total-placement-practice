#include<bits/stdc++.h>
using namespace std;

void intersectionNaive(int arr[], int n, int brr[], int m) {
	for (int i = 0; i < n; i++) {
		if (i > 0 and arr[i] == arr[i - 1]) {
			continue;
		} else {
			for (int j = 0; j < m; j++) {
				if (arr[i] == brr[j]) {
					cout << arr[i] << " ";
					break;
				}
			}
		}
	}
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

	int m;
	cin >> m;
	int brr[m];
	for (int i = 0; i < m; i++) {
		cin >> brr[i];
	}

	intersectionNaive(arr, n, brr, m);

	return 0;
}