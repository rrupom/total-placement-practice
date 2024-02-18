#include<bits/stdc++.h>
using namespace std;

void makeTranposeNaive(int *arr[], int dimension) {
	// extra memory
	int temp[dimension][dimension];

	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			temp[i][j] = arr[j][i];
		}
	}

	// second iteration to store it in the original array

	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			arr[i][j] = temp[i][j];
		}
	}

	// printing the elements
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void makeTranposeEfficient(int *arr[], int dimension) {
	// the diagonal element are same.
	// only traverse the upper diagonal elements of the array
	for (int i = 0; i < dimension; i++) {
		for (int j = i + 1; j < dimension; j++) {
			swap(arr[i][j], arr[j][i]);
		}
	}

	// printing elements
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

	makeTranposeNaive(arr, dimension);
	makeTranposeEfficient(arr, dimension);

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
1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16

*/