/*
	In Josephus problem every person kill kth person in circular fashion
*/

#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k) {
	if (n == 1) return 0;
	return (josephus(n - 1, k) + k) % n;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int numberOfPeoples, k;
	cin >> numberOfPeoples >> k;

	cout << josephus(numberOfPeoples, k) << endl; // 0-based indexing
	cout << josephus(numberOfPeoples, k) + 1; // 1-based indexing

	return 0;
}