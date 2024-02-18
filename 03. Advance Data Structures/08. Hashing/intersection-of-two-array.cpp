/*
	Problem : Two arrays are given. They are not sorted and can have duplicate elements
	Counts the numbers of common elements
*/

#include<bits/stdc++.h>
using namespace std;

void takeInput(vector<int> &a) {
	int n;
	int x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
}

void countCommonElements(vector<int> a, vector<int> b) {
	unordered_map<int, int> mp;

	for (int i = 0; i < a.size(); i++) {
		mp[a[i]]++;
	}

	int count = 0;

	for (int i = 0; i < b.size(); i++) {
		mp[b[i]]++;
	}

	for (auto it : mp) {
		if (it.second >= 2) {
			count++;
		}
	}

	cout << "Number of common elements are : " << count << endl;
}

void countCommonElementWithSet(vector<int> a, vector<int> b) {
	unordered_set<int> s;

	// inserting elements from the first vector
	for (int i = 0; i < a.size(); i++) {
		s.insert(a[i]);
	}

	int count = 0;
	for (int i = 0; i < b.size(); i++) {
		if (s.find(b[i]) != s.end()) {
			count++;
			s.erase(b[i]); // for handling duplicate elements in b
		}
	}

	cout << "Number of common elements are : " << count << endl;
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

	takeInput(a);
	takeInput(b);
	countCommonElements(a, b);
	countCommonElementWithSet(a, b);

	return 0;
}