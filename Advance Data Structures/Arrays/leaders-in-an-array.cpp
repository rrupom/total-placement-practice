/*
	Problem : Print leader in an array
	Leader are the elements whose all right elements are smaller than that element
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> findLeadersNaive(vector<int> v) {
	vector<int> ans;

	int mn = INT_MIN;

	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] > mn) {
			mn = v[i];
			ans.emplace_back(v[i]);
		}
	}


	return ans;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	vector<int> ans = findLeadersNaive(v);

	for (int i = ans.size() - 1; i >= 0; i--) {
		cout << ans[i] << " \n" [i == 0];
	}

	return 0;
}