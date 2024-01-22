/*
	Problem : There is an array and a window size k. We have print number of distinct elements in every window
	Solution approach:
		If there are n elements in the array, then there will be n-k+1 windows in the array
		- we will process the first window.
		- then move one element and add it to the frequence map and delete array[i-k] element from the frequency map
*/

#include<bits/stdc++.h>
using namespace std;

void countDistinctElementsInWindows(vector<int> v, int windowSize) {
	// process the first window

	unordered_map<int, int> mp;
	for (int i = 0; i < windowSize; i++) {
		mp[v[i]]++;
	}
	cout << mp.size() << " ";

	// processing other windows

	for (int i = windowSize; i < v.size(); i++) {
		mp[v[i]]++;
		int element = v[i - windowSize];
		if (--mp[element] == 0) {
			mp.erase(element);
		} else {
			--mp[element];
		}

		cout << mp.size() << " ";
	}
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

	vector<int> v;
	takeVectorInput(v);

	int windowSize;
	cin >> windowSize;

	countDistinctElementsInWindows(v, windowSize);

	return 0;
}

/*
input:
6
10 7 5 10 9 4
4
*/

/*
output:
3 4 4
*/