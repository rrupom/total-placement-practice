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

	int row, col;
	cin >> row >> col;

	int arr[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}

	int brr[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> brr[i][j];
		}
	}

	int crr[row][col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int sum = 0;
			for (int k = 0; k < row; k++) {
				sum += (arr[i][k] * brr[k][j]);
			}
			crr[i][j] = sum;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << crr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}