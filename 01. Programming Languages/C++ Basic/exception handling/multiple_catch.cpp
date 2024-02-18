#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	double x, y;
	cin >> x >> y;

	try {
		if (x == 0.0) {
			throw 0;
		}
		if (y == 0.0) {
			throw string("value of y is zero");
		}
		if (x + y < 0.0) {
			throw (x + y);
		}
	} catch (int e) {
		cout << e << endl;
	} catch (string s) {
		cout << s << endl;
	} catch (...) {
		// this catch block all other exceptions except int and string
		cout << "x+y is less than zero" << endl;
	}

	cout << "Bye" << endl;

	return 0;
}