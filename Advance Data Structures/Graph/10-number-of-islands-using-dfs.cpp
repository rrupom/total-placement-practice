#include<bits/stdc++.h>
using namespace std;


void dfs(int **grid, int i, int j, int row, int col ) {
	if (i<0 or i> (row - 1) or j<0 or j> (col - 1) or grid[i][j] != 1) {
		return;
	}

	if (grid[i][j] == 1) {
		grid[i][j] = 0;
		dfs(grid, i, j - 1, row, col);
		dfs(grid, i, j + 1, row, col);
		dfs(grid, i - 1, j, row, col);
		dfs(grid, i + 1, j, row, col);

		dfs(grid, i - 1, j - 1, row, col);
		dfs(grid, i - 1, j + 1, row, col);
		dfs(grid, i + 1, j - 1, row, col);
		dfs(grid, i + 1, j + 1, row, col);
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

	int **grid;

	int row, col;
	cin >> row >> col;

	grid = new int *[row];

	for (int i = 0; i < row; i++) {
		grid[i] = new int[col];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> grid[i][j];
		}
	}

	int count = 0;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (grid[i][j] == 1) {
				dfs(grid, i, j, row, col);
				++count;
			}
		}
	}

	cout << "Total islands  = " << count << endl;

	return 0;
}