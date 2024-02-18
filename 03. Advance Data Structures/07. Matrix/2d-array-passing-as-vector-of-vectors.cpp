#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &arr) {
	// passing it by reference for optimization. Without passing by reference another copy of will be create.
	for (int i = 0; i < arr.size(); i++) {
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

	vector<vector<int>> arr;

	for (int i = 0; i < row; i++) {
		vector<int> v;
		for (int j = 0; j < column; j++) {
			v.push_back(i + j);
		}
		arr.push_back(v);
	}

	print(arr);

	return 0;
}