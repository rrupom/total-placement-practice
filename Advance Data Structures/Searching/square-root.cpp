/*
	Problem : Find square root of a number. Return floor of integer value
*/

#include<bits/stdc++.h>
using namespace std;

int sqRoot(int number) {
	int low = 1;
	int high = number;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		int sq = mid * mid;
		if (sq == number) return mid;
		else if (sq > number) {
			high = mid - 1;
		} else {
			low = mid + 1;
			ans = mid;
		}
	}

	return ans;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int number;
	cin >> number;

	int ans = sqRoot(number);
	cout << ans << endl;

	return 0;
}