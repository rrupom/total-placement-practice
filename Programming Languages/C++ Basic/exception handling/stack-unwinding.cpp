#include<bits/stdc++.h>
using namespace std;

void f1() {
	cout << "f1 begin" << endl;
	throw 100;
	cout << "f1 end" << endl;
}

void f2() {
	cout << "f2 begin" << endl;
	f1();
	cout << "f2 ends" << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	try {
		f2();
	} catch (int i) {
		cout << "Caught exception" << endl;
	}

	cout << "Bye" << endl;

	return 0;
}