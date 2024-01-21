/*
	Problem : the given matrix is sorted on row-wise and column-wisw
	we need to search for an given element. If the element is found simply
	print the position. Otherwise print not found

	How to solve:
		- Begin from the top right corner
		- if the element is greate than the current element then go to the next row
		- else go to the previous column
*/

#include<bits/stdc++.h>
using namespace std;

void searchInMatrix(int *arr[], int row, int column, int key) {
	int i = 0; // top element's row
	int j = column - 1; // top element's column

	while (i<row and j >= 0) {
		if (arr[i][j] == key) {
			cout << "Element found at position : (" << i << "," << j << ")" << endl;
			return;
		} else if (key > arr[i][j]) {
			i++;
		} else {
			j--;
		}
	}

	// if the element is not found

	cout << "Not found\n";

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

	// taking inputs:
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> arr[i][j];
		}
	}

	// element to be searched
	int key;
	cin >> key;

	searchInMatrix(arr, row, column, key);

	return 0;
}