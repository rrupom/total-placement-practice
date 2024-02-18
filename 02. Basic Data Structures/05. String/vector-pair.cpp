#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<pair<int, vector<int>>> v;

	for (int i = 0; i < 3; i++) {
		vector<int> a;
		// for (int j = i + 1; j < 10; j++) {
		// 	a.push_back(j);
		// }
		v.push_back(make_pair(i, a));
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " : ";
		for (int j = 0; j < v[i].second.size(); j++) {
			cout << v[i].second[j] << " ";
		}
		cout << endl;
	}

	return 0;
}