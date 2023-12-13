#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
	}

	int result = -1;


	for (auto it : mp) {
		if (it.second >= n / 2 and it.second > 1)
			result = it.first;
	}


	cout << result << endl;
	return 0;
}