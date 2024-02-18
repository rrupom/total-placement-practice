#include<bits/stdc++.h>
using namespace std;

void pairWithGivenSum(vector<int> a, int sum) {
	unordered_map<int, int> mp;
	for (int i = 0; i < a.size(); i++) {
		if (mp.find(sum - a[i]) != mp.end()) {
			cout << "Pair found\n";
			return;
		}
		mp[a[i]]++;
	}

	cout << "No pair found\n";
}

void takeVectorInput(vector<int> &a) {
	int n, x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
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

	vector<int> a;
	takeVectorInput(a);

	int sum;
	cin >> sum;

	pairWithGivenSum(a, sum);

	return 0;
}