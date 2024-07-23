/*
	Problem : Find two odd appearing numbers
	I/p: arr[] = {3, 4, 3, 4, 8, 4, 4, 32, 7, 7}
	O/P: 8 32

	Solving approach:
		1. Find the XOR of all the numbers
		2. Find the last set bit of XOR
		3. Group the numbers depending upon the set bit
		4. XOR of each group is the answer
*/

#include<bits/stdc++.h>
using namespace std;

pair<int, int> findTwoOddNumbers(int numbers[], int n) {
	int XOR = 0, result1 = 0, result2 = 0 ;

	// XOR of all the numbers
	for (int i = 0; i < n; i++) {
		XOR ^= numbers[i];
	}

	// finding the last set bit
	int signBit = XOR & ~(XOR - 1);

	// diving the numbers in two group and xoring for getting the result
	for (int i = 0; i < n; i++) {
		if (numbers[i] & signBit) {
			result1 ^= numbers[i];
		} else {
			result2 ^= numbers[i];
		}
	}

	return {result1, result2};
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
	int numbers[n];

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	pair<int, int> ans = findTwoOddNumbers(numbers, n);

	cout << ans.first << " " << ans.second << endl;


	return 0;
}

/*
input:
10
3 4 3 4 8 4 4 32 7 7
*/

/*
output:
8 32
*/