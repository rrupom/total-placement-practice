#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x = 10, y = 20;
	double z = (double)x / y; // old way of static casting
	cout << z << endl;

	double m = static_cast<double> (x) / y; // modern way of casting
	cout << m << endl;

	int a = 1, b = 2, c = 3, d;
	d = (a, b, c); // comma has right associativity.  so d gets the rightest value;
	cout << d << endl;

	return 0;
}