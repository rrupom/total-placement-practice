#include<bits/stdc++.h>
using namespace std;

void printNumber(int num) {
	if (num < 1) {
		return;
	}
	else {
		printNumber(num - 1);
		cout << num << " ";
		return;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int num;
	cin >> num;
	printNumber(num);


	return 0;
}