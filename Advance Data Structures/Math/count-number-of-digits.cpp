#include<bits/stdc++.h>
using namespace std;

int countDigitsIterative(int number) {
	int count = 0;

	while (number) {
		number /= 10;
		++count;
	}

	return count;
}

int countDigitsRecursive(int number) {
	if (number == 0) return 0;
	return 1 + countDigitsRecursive(number / 10);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int number;
	cin >> number;

	int numOfDigits = countDigitsIterative(number);
	cout << numOfDigits << endl;

	numOfDigits = countDigitsRecursive(number);
	cout << numOfDigits << endl;

	return 0;
}