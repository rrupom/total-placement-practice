#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	unordered_set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(15);

	// erasing from the set
	// s.erase(15); // or

	auto it = s.find(15);
	s.erase(it);

	for (auto it : s) {
		cout << it << endl;
	}

	// find key in the set
	// if (s.find(15) != s.end()) {
	// 	cout << "Element is found\n";
	// } else {
	// 	cout << "Element is not found\n";
	// }

	// if (s.count(15)) {
	// 	cout << "Element is found\n";
	// } else {
	// 	cout << "Element is not found\n";
	// }

	// first method of iteration

	// for (auto it : s) {
	// 	cout << it << endl;
	// }
	// cout << endl;

	// another mothod of iteration

	// for (auto it = s.begin(); it != s.end(); it++) {
	// 	cout << *it << endl;
	// }

	return 0;
}