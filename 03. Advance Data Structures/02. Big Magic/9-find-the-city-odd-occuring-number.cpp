#include<bits/stdc++.h>
using namespace std;

int findCityWithOddOccuringNumberNaive(int cities[], int n) {
	/*
	Time Complexity: O(n*n)
	Space Complexity: O(1)
	*/

	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = i; j < n; j++) {
			if (cities[i] == cities[j]) {
				count++;
			}
		}

		if (count % 2 != 0) {
			return cities[i];
		}
	}

	return -1;
}

int findCityWithOddOccuringNumberEfficient(int cities[], int n) {
	/***
	 * this solution is based on xor operator. every same number xoring for
	 * even number of times result in 0
	 * */

	int result = 0;

	for (int i = 0; i < n; i++) {
		result ^= cities[i];
	}

	return result;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("E:/Codes/input.txt", "r", stdin);
	freopen("E:/Codes/output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int cities[n];

	for (int i = 0; i < n; i++) {
		cin >> cities[i];
	}

	cout << findCityWithOddOccuringNumberNaive(cities, n) << endl;
	cout << findCityWithOddOccuringNumberEfficient(cities, n) << endl;


	return 0;
}