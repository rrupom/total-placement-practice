#include<bits/stdc++.h>
using namespace std;

const int row = 3;
const int column = 2;

void print(int arr[row][column]) {
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

	int arr[row][column];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			arr[i][j] = i + j;
		}
	}

	print(arr);

	return 0;
}