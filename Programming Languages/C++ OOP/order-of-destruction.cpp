#include<bits/stdc++.h>
using namespace std;

class Test {

	int x;

public:
	Test(int i): x(i) {
		cout << "constructor " << x << endl;
	}

	~Test() {
		cout << "destructor " << x << endl;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Test t1(10);
	Test t2(20);

	return 0;
}

/* output:
constructor 10
constructor 20
destructor 20
destructor 10
*/