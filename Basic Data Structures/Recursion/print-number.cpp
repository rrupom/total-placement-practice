#include<bits/stdc++.h>
using namespace std;

void printNumber(int n) {
	if (n < 1) {
		return ;
	} else {
		cout << n << " ";
		printNumber(n - 1);
		return;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	printNumber(5);


	return 0;
}