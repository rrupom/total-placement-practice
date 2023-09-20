#include<bits/stdc++.h>
using namespace std;

int powerWithRecursion(int number, int power) {
	if (power == 0) {
		return 1;
	}

	return number * powerWithRecursion(number, power - 1);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "Enter number and power : " << flush;

	int number, power;

	cin >> number >> power;

	cout << powerWithRecursion(number, power);

	return 0;
}