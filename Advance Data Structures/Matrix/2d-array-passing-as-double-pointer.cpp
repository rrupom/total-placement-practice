#include<bits/stdc++.h>
using namespace std;

void print(int **arr, int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << arr[i][j] << " ";
		}
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	// declare array as double pointer
	int **arr;
	int row = 3;
	int column = 2;

	arr = new int *[row];

	for (int i = 0; i < row; i++) {
		arr[i] = new int[column];
	}

	// assigning value to the array
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			arr[i][j] = i + j;
		}
	}

	print(arr, row, column);

	return 0;
}