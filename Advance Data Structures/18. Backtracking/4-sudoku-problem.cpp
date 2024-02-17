/*
	Problem : A square sudoku grid of N x N is provided. Some grid elements are 0. We have fill this 0 elements. But there are certail rule
	1. Elements of every row must be unique
	2. Elements of every column must be unique
	3. Elements of every sqrt(n) x sqrt(n) subgrid must be unuique
	4. Numbers must be 1 to n

	Example :
	1 0 3 0
    0 0 2 1
    0 1 0 2
    2 4 0 0

    Output:
    1 2 3 4
    4 3 2 1
    3 1 4 2
    2 4 1 3
*/

#include<bits/stdc++.h>
using namespace std;

#define sz 100

int board[sz][sz];

void printBoard(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

bool isSafe(int num, int i, int j, int n) {
	for (int k = 0; k < n; k++) {
		if (board[i][k] == num or board[k][j] == num) {
			return false;
		}
	}

	// finding the grid indexes;

	int s = sqrt(n);
	int rs = i - i % s;
	int cs = j - j % s;

	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			if (board[i + rs][j + cs] == num) {
				return false;
			}
		}
	}

	return true;
}

pair<int, int> getCurrentBlankElement(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 0) {
				return {i, j};
			}
		}
	}

	return {n, n};
}

bool solveSudoku(int n) {
	// first find the empty cell
	int i, j;

	pair<int, int> pos = getCurrentBlankElement(n);

	i = pos.first;
	j = pos.second;


	// so board[i][j] should be filled with valid number

	if (i == n and j == n) {
		// if not cell is empty then i and j will be n
		return true;
	}

	// if not then
	for (int num = 1; num <= n; num++) {
		if (isSafe(num, i, j, n)) {
			board[i][j] = num;
			if (solveSudoku(n)) {
				return true;
			}

			board[i][j] = 0; // backtracking
		}
	}

	return false;
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

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}

	if (solveSudoku(n)) {
		cout << "Solution possible. One possible solution is : \n";
		printBoard(n);
	} else {
		cout << "Solution not possible\n";
	}


	return 0;
}

/*
input:
4
1 0 3 0
0 0 2 1
0 1 0 2
2 4 0 0
*/

/*
output:
Solution possible. One possible solution is :
1 2 3 4
4 3 2 1
3 1 4 2
2 4 1 3
*/