#include<bits/stdc++.h>
using namespace std;

bool withLeftShif(int n, int k) {
	if ((n & (1 << (k - 1))) != 0) {
		return true;
	}

	return false;
}

bool withRightShift(int n, int k) {
	if ((n >> (k - 1)) & 1) {
		return true;
	}

	return false;
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

	int n, k;
	cin >> n >> k;

	withLeftShif(n, k) ? cout << "Yes\n" : cout << "No\n";
	withRightShift(n, k) ? cout << "Yes\n" : cout << "No\n";
	return 0;
}