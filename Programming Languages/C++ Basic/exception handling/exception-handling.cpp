#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x, y;
	cin >> x >> y;
	try {
		if (y == 0) {
			throw 0;
		}
		cout << "Result is " << x / y;
	} catch (int x) {
		cout << "Divisor is Zero" << endl;
	}

	return 0;
}