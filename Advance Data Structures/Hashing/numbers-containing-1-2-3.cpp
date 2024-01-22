/*
	Problem : Print all number from 1 to n whose container digits 1 2 and 3.
	That numbers must contain at least 1 of the digits digits
*/

#include<bits/stdc++.h>
using namespace std;

bool checkNumber(int n) {
	string num = to_string(n);

	int c1 = 0;
	int c2 = 0;
	int c3 = 0;

	for (int i = 0; i < num.length(); i++) {
		if (num[i] == '1') ++c1;
		else if (num[i] == '2') ++c2;
		else if (num[i] == '3') ++c3;
	}

	return (c1 || c2 || c3);
}

void printAllNumbers(int n) {
	vector<int> numbers;
	for (int i = 1; i < n; i++) {
		if (checkNumber(i)) {
			numbers.push_back(i);
		}
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	printAllNumbers(n);

	return 0;
}