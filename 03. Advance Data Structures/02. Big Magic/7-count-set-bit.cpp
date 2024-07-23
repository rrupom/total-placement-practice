#include<bits/stdc++.h>
using namespace std;

int countSetBits(int number) {
	int count = 0;
	while (number > 0) {
		count += (number & 1);
		number /= 2;
	}

	return count;
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

	int number;
	cin >> number;

	cout << countSetBits(number);

	return 0;
}