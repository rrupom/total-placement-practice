#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<vector<int>> arr;
	int row = 3;
	int column = 2;

	for (int i = 0; i < row; i++) {
		vector<int> v;
		for (int j = 0; j < column; j++) {
			v.push_back(i + j);
		}
		arr.push_back(v);
	}

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			cout << arr[i][j] << " ";
		}
	}


	return 0;
}