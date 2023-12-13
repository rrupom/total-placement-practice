#include<bits/stdc++.h>
using namespace std;

int total_digits(int number) {
	if (number == 0) {
		return 0;
	}

	return total_digits(number / 10) + 1;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "Enter number " << endl;
	int number;
	cin >> number;

	cout << total_digits(number);

	return 0;
}