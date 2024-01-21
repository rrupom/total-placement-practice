#include<bits/stdc++.h>
using namespace std;

void printBoundaryElements(int *arr[], int row, int column) {
	// there are two corner cases. If the single row or single column
	if (row == 1) {
		for (int i = 0; i < column; i++) {
			cout << arr[0][i] << " ";
		}
	} else if (column == 1) {
		for (int i = 0; i < row; i++) {
			cout << arr[i][0] << " ";
		}
	} else {
		for (int i = 0; i < column; i++) {
			cout << arr[0][i] << " ";
		}
		for (int i = 1; i < row; i++) {
			cout << arr[i][column - 1] << " ";
		}
		for (int i = column - 2; i >= 0; i--) {
			cout << arr[row - 1][i] << " ";
		}
		for (int i = row - 2; i >= 1; i--) {
			cout << arr[i][0] << " ";
		}
		cout << endl;
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

	int row;
	int column;

	cin >> row >> column;

	int *arr[row];

	for (int i = 0; i < row; i++) {
		arr[i] = new int[column];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> arr[i][j];
		}
	}

	printBoundaryElements(arr, row, column);

	return 0;
}

/*

input:
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

*/

/*

output:
1 2 3 4 8 12 16 15 14 13 9 5

*/