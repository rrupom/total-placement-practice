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

bool isSafe(int row, int col, int n) {

	// as we place the queen in the different row. we need to check only horizontal clashing
	for (int i = 0; i < col; i++) {
		if (board[row][i]) {
			return false;
		}
	}

	// upper triange
	for (int i = row, j = col; i >= 0 and j >= 0; i--, j--) {
		if (board[i][j]) {
			return false;
		}
	}

	// lower triangle

	for (int i = row, j = col; i<n and j >= 0; i++, j--) {
		if (board[i][j]) {
			return false;
		}
	}

	return true;

}

bool solveRec(int col, int n) {
	if (n == col) {
		return true;
	}

	for (int row = 0; row < n; row++) {
		if (isSafe(row, col, n)) {
			board[row][col] = 1;

			if (solveRec(col + 1, n)) {
				return true;
			}

			board[row][col] = 0;
		}
	}

	return false;
}

void solveNQueen(int n) {
	if (!solveRec(0, n)) {
		cout << "Not possible\n";
	} else {
		cout << "Possible. Solution board is :\n";
		printBoard(n);
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

	int number_of_queens;
	cin >> number_of_queens;

	solveNQueen(number_of_queens);


	return 0;
}

/*
input:
4
*/

/*
output:
Possible. Solution board is :
0 0 1 0
1 0 0 0
0 0 0 1
0 1 0 0
*/