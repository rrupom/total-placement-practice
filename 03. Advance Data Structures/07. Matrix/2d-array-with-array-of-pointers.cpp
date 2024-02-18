#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int row = 3;
	int column = 2;

	int *arr[row];

	for (int i = 0; i < row; i++) {
		arr[i] = new int[column];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			arr[i][j] = 100;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << arr[i][j] << " ";
		}
	}

	return 0;
}