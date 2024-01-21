#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr[], int row) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			cout << arr[i][j] << " ";
		}
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int row = 3;
	int column = 2;

	vector<int> arr[row];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			arr[i].push_back(i + j);
		}
	}

	print(arr, row);


	return 0;
}