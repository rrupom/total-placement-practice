#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "Enter two numbers to calculate gcd" << endl;
	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << endl;

	return 0;
}