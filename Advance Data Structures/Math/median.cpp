#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	// sorting is the primary condition to find median
	// if total number of elements is odd, then middle element is found by numOfElements/2 index
	// if total number of elements is even, then middle element is found by mean of
	// (elements -1 )/2 + (elements)/2 indexed elements

	int n, x;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	if (n % 2 == 1) {
		cout << "Median is : " << v[n / 2];
	} else {
		int index = (n - 1) / 2;
		cout << "Median is : " << (v[index] + v[index + 1]) / 2;
	}


	return 0;
}