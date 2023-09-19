#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int number) {
	if (number == 0 ) {
		return 0;
	}
	return sumOfDigits(number / 10) + number % 10;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int number;
	cin >> number;

	int sum = sumOfDigits(number);

	cout << sum << endl;

	return 0;
}