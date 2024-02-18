#include<bits/stdc++.h>
using namespace std;

class Test {

public:
	Test() {
		cout << "contructor called" << endl;
	}
	~Test() {
		cout << "Destructor called" << endl;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	{
		Test t1; // {} is used for creating scope
	}

	Test t2;
	Test t3;

	return 0;
}

/* output
contructor called
Destructor called
contructor called
contructor called
Destructor called
Destructor called

*/