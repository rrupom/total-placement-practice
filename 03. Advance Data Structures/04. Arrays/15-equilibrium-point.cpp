/*
	Problem : if at any point lef_tsum and right_sum is equal, then this point is the equilibrium point
*/

#include<bits/stdc++.h>
using namespace std;

void hasEquilibriumPoint(int points[], int n) {
	/**
	 * to solve this problem we can use prefix sum technique.
	 * **/

	int total_sum = 0;
	for (int i = 0; i < n; i++) {
		total_sum += points[i];
	}

	int leftsum = 0;

	for (int i = 0; i < n; i++) {
		if (leftsum == total_sum - points[i]) {
			cout << "Has equilibrium point\n";
		} else {
			leftsum += points[i];
			total_sum -= points[i];
		}
	}
}

int32_t main()
{


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	hasEquilibriumPoint(arr, n);

	return 0;
}

/*
input:
6
3 4 8 -9 20 6
*/

/*
output:
Has equilibrium point
*/