/*
	Problem : Suppose an array is given. You have to answer the thousands of query in O(1) time
	Technique: Precalculate prefix sum
*/

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

	int prefix[n];

	prefix[0] = arr[0];

	for (int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + arr[i];
	}

	cout << "How many queries : " << endl;

	int q;
	cin >> q;

	while (q--) {
		int left, right;
		cin >> left >> right;
		if (left == 0) cout << prefix[right] << endl;
		else cout << prefix[right] - prefix[left - 1] << endl;;
	}


	return 0;
}