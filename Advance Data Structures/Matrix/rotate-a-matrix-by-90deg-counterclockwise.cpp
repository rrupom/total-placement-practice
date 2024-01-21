#include<bits/stdc++.h>
using namespace std;

void reverseRow(int *arr[], int dimension) {
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension / 2; j++) {
			swap(arr[i][j], arr[i][dimension - 1 - j]);
		}
	}
}

void makeTranspose(int *arr[], int dimension) {
	for (int i = 0; i < dimension; i++) {
		for (int j = i + 1; j < dimension; j++) {
			swap(arr[i][j], arr[j][i]);
		}
	}
}

void rotateBy90DegCC(int *arr[], int dimension) {
	/*
		to rotate by 90 counter clockwise, first we need to reverse every row of the matrix
		then simple transopse the matrix and this will be the answer
	*/
	reverseRow(arr, dimension);
	makeTranspose(arr, dimension);

	// printing the elements
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int dimension;
	cin >> dimension;

	int *arr[dimension];

	for (int i = 0; i < dimension; i++) {
		arr[i] = new int[dimension];
	}

	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			cin >> arr[i][j];
		}
	}

	rotateBy90DegCC(arr, dimension);


	return 0;
}

/*
input:
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

/*
output:
4 8 12 16
3 7 11 15
2 6 10 14
1 5 9 13
*/