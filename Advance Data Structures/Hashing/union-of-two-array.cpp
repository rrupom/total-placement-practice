#include<bits/stdc++.h>
using namespace std;

void countUnionELements(vector<int> a,vector<int> b) {
	unordered_set<int> s;

	for (int i = 0; i < a.size(); i++) {
		s.insert(a[i]);
	}

	for (int i = 0; i < b.size(); i++) {
		s.insert(b[i]);
	}

	cout << "Number of union elements are : " << s.size() << endl;
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
	vector<int> b;

	takeVectorInput(a);
	takeVectorInput(b);
	countUnionELements(a, b);


	return 0;
}