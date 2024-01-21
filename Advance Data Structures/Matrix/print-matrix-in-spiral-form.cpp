#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int *arr[], int dimension) {
	int top = 0;
	int bottom = dimension - 1;
	int left = 0;
	int right = dimension - 1;

	while (top <= bottom and left <= right) {
		// print the top row
		for (int i = left; i <= right; i++) {
			cout << arr[top][i] << " ";
		}
		top++;

		// print the right column
		for (int i = top; i <= bottom; i++) {
			cout << arr[i][right] << " ";
		}
		right--;

		if (top <= bottom) {
			// print the bottom row
			for (int i = right; i >= left; i--) {
				cout << arr[bottom][i] << " ";
			}

			bottom--;
		}

		if (left <= right) {
			//printing left column
			for (int i = bottom; i >= top; i--) {
				cout << arr[i][left] << " ";
			}
			left++;
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

	int dimension;
	cin >> dimension;

	int *arr[dimension];

	for (int i = 0; i < dimension; i++) {
		arr[i] = new int[dimension];
	}

	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			cin >> arr[i][j];
		}
	}

	spiralPrint(arr, dimension);

	return 0;
}

/*
input:
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

/*
expected output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/

/*
output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/