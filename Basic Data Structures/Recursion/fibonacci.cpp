#include<bits/stdc++.h>
using namespace std;

int fibonacci(int number) {
	if (number == 0 or number == 1) {
		return number;
	}

	return fibonacci(number - 1) + fibonacci(number - 2);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "How many fibonacci : " << endl;
	int number;
	cin >> number;

	cout << fibonacci(number);


	return 0;
}