#include<bits/stdc++.h>
using namespace std;

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

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << arr[i][j] << " ";
		}
	}


	return 0;
}