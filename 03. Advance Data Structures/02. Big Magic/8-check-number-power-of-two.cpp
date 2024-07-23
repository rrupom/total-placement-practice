#include<bits/stdc++.h>
using namespace std;

bool numberPowerOfTwoNaive(int number) {
	if (number == 0) {
		return false;
	}

	while (number != 1) {
		if (number % 2 == 1) {
			return false;
		}

		number /= 2;
	}

	return true;
}

bool numberPowerOfTwoEfficient(int number) {
	/**
	 * if a number is power of two, it will have only one set bit. so unset
	 * all the bits then check if the number if 0 or not
	 * **/

	if (number == 0) return false;
	return ((number & (number - 1)) == 0);
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

	numberPowerOfTwoNaive(number) ? cout << "Yes\n" : cout << "No\n";
	numberPowerOfTwoEfficient(number) ? cout << "Yes\n" : cout << "No\n";


	return 0;
}