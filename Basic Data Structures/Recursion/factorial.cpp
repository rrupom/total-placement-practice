#include<bits/stdc++.h>
using namespace std;

int factorial(int number) {
	if (number <= 0) return 1;
	return number * factorial(number - 1);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "Enter the number for factorial : " << endl;
	int number;
	cin >> number;

	cout << factorial(number);

	return 0;
}