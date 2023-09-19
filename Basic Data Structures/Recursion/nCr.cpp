#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
	if (n <= 0) return 1;
	return n * factorial(n - 1);
}

int calculateNCR(int n, int r) {
	int ans = (factorial(n) ) / ((factorial(r) * factorial(n - r)));

	return ans;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "Enter n and r to calculate nCr : " << endl;
	int n, r;
	cin >> n >> r;

	cout << calculateNCR(n, r);

	return 0;
}