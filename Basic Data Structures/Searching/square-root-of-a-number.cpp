#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x;
	cin >> x;

	int low = 0;
	int high = x;
	int result = 0;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (mid * mid <= x) {
			low = mid + 1;
			result = mid;
		} else if (mid * mid > x) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}

	cout << result << endl;

	return 0;
}