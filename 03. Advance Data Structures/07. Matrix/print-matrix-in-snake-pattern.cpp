#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int row, column;
	cin >> row >> column;

	int arr[row][column];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < column; j++) {
				cout << arr[i][j] << " ";
			}
		} else {
			for (int j = column - 1; j >= 0; j--) {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}

/*
input:
3 2
1 2
3 4
5 6
*/

/*
output:
1 2
4 3
5 6
*/