#include<bits/stdc++.h>
using namespace std;

class Test {

public:
	Test() {
		cout << "Default" << endl;
	}

	Test(int x) {
		cout << "Parameterized constructor" << endl;
	}

};

class Main {

	Test t;

public:
	Main(): t(10) {}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Main m;

	return 0;
}

/*
Output:
Parameterized constructor
*/