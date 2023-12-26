/*
	Problem : two sorted array a1 and a2 is given. Find the median of the two array
	Approach : We will assume that a1 has always the less number of elements from the a2 array
	if not, then we need to swap the reference of the two array

	then for any index of i1 in a1, calculate corresponding i2 with the following formula
	i2 = (n1+n2+1/2) - i1 [Note: integer division]
*/

#include<bits/stdc++.h>
using namespace std;

int getMedian(int a1[], int a2[], int n1, int n2) {
	// incomplete code
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;

	int a1[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int m;
	cin >> m;

	int a2[m];

	for (int i = 0; i < m; i++) {
		cin >> a2[i];
	}

	int ans = getMedian(a1, a2, n - 1, m - 1);
	cout << ans << endl;

	return 0;
}