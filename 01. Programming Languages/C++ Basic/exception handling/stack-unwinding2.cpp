#include<bits/stdc++.h>
using namespace std;

void funB() {
	cout << "Entering funB" << endl;
	throw runtime_error("Exception in funB");
	cout << "Exiting funB" << endl;
}

void funA() {
	cout << "Entering funcA" << endl;
	// funB();
	try {
		funB();
	} catch (const runtime_error& e) {
		cout << "caught exception in funA : " << e.what() << endl;
	}
	cout << "Exiting funA" << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "Entering main." << endl;
	try {
		funA();
	} catch (const runtime_error& e) {
		cout << "Caught exception in main: " << e.what() << endl;
	}

	cout << "Exiting main." << endl;

	return 0;
}