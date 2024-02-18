#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> v;
	vector<int> v1(10, 5); // create vector of size 10 with element 5
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	for (auto it : v) {
		cout << it << endl;
	}

	for (auto it : v1) {
		cout << it << endl;
	}

	// maximum element in the vector
	int maxele = *max_element(v.begin(), v.end());
	cout << maxele << endl;


	return 0;
}