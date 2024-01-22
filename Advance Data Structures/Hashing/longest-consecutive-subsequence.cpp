/*
	Problem : An array is given. Find the logest consecutive sequence
	Solution approach :
	Method 1: Sorting
*/

#include<bits/stdc++.h>
using namespace std;

void longestConSubsequenceWithHashing(vector<int> v) {
	/* Algorithm:
	- initialize res = 0
	- create a hash table h
	- insert all the elements in into hash table
	- now iterate from the beginning of the array
	- if the arr[ele]-1 not present in the hash table that means
	it is the starting of a sequence
		- cur = 1
		- while(hash table contains (element+1))
			- cur++
		- res = max(cur,res)
	*/

	unordered_map<int, int> mp;

	for (int i = 0; i < v.size(); i++) {
		mp[v[i]]++;
	}

	int res = 0;

	for (int i = 0; i < v.size(); i++) {
		if (mp.find(v[i] - 1) == mp.end()) {
			// so this element is the starting of a new section
			int cur = 1;
			int element = v[i];
			while (mp.find(element + 1) != mp.end()) {
				cur++;
				element++;
			}
			res = max(res, cur);
		}
	}

	cout << "Longest Span : " << res << endl;

}

void longestConSubsequenceWithSorting(vector<int> v) {
	sort(v.begin(), v.end());
	int res = 1;
	int cur = 1;

	for (int i = 1; i < v.size(); i++) {
		if (v[i - 1] + 1 != v[i]) {
			res = max(res, cur);
			cur = 1;
		} else {
			cur++;
		}
	}

	// to handle the cases when all the array elements are consequetive
	// 1 2 3 4 5 => in this case we do not go to the if part
	res = max(res, cur);

	cout << "Longest Span : " << res << endl;
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

	longestConSubsequenceWithSorting(v);
	longestConSubsequenceWithHashing(v);

	return 0;
}

/*
input:
7
1 2 3 4 5 6 7
*/

/*
output:
Longest Span : 7
Longest Span : 7
*/