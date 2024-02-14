#include<bits/stdc++.h>
using namespace std;

bool visited[500][500];

bool dfs(int *arr[], int i, int j, int row, int col) {
	if (i >= 0 and i < (row) and j >= 0 and j < (col) and arr[i][j] == 2) {
		return true;
	}

	if (i < 0 or i > (row - 1) or j <0 or j>(col - 1) or arr[i][j] == 0) {
		return false;
	}

	if (!visited[i][j]) {
		visited[i][j] = true;
		bool a1 = dfs(arr, i, j - 1, row, col);
		bool a2 = dfs(arr, i, j + 1, row, col);
		bool a3 = dfs(arr, i - 1, j, row, col);
		bool a4 = dfs(arr, i + 1, j, row, col);

		return a1 or a2 or a3 or a4 ;
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("E:/Codes/input.txt", "r", stdin);
	freopen("E:/Codes/output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int row, col;
	cin >> row >> col;

	int *arr[row];

	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] == 1) {
				cout << dfs(arr, i, j, row, col);
			}
		}
	}


	return 0;
}