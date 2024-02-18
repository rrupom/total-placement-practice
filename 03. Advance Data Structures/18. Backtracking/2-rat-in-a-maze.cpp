/*
	Problem : A maze is given. If the rat can move from top-left corner to
	the bottom-right corner then output yes along with mazr.
	Only two moves from (i,j) is valid
	1. (i+1,j)
	2. (i,j+1)
*/

#include<bits/stdc++.h>
using namespace std;

#define N 100

int maze[N][N], solutionPath[N][N];

bool isSafe(int i, int j, int n) {
	return (i < n and j < n and maze[i][j] != 0);
}

void printSolutionMatrix(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << solutionPath[i][j] << " ";
		}
		cout << endl;
	}
}

bool solveMazeRecur(int i, int j, int n) {
	if (i == n - 1 and j == n - 1) {
		solutionPath[i][j] = 1;
		return true;
	}

	if (isSafe(i, j, n)) {
		solutionPath[i][j] = 1;
		if (solveMazeRecur(i + 1, j, n)) return true;
		else if (solveMazeRecur(i, j + 1, n)) return true;
		else {
			solutionPath[i][j] = 0;
		}
	}
}

void solveMaze(int n) {
	if (!solveMazeRecur(0, 0, n)) {
		cout << "NO\n";
	} else {
		cout << "Yes\n";

		printSolutionMatrix(n);
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

	int n;
	cin >> n;

	// input of maze
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> maze[i][j];
		}
	}

	solveMaze(n);


	return 0;
}

/*
input:
4
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1
*/

/*
output:
Yes
1 0 0 0
1 1 0 0
0 1 0 0
0 1 1 1
*/