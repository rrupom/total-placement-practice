#include<bits/stdc++.h>
using namespace std;

class Test {

private:
	int *ptr;

public:

	Test(int x) {
		ptr = new int(x);
	}

	// it is deep copy constructor
	Test(const Test &t) {
		// if we do not use reference, it will become non terminating recursion. it will also cause
		// compiler error with modern compiler
		// const is used because we do not eant to modify our reference object

		int val = *(t.ptr);
		ptr = new int(val);
	}

	void set(int x) {
		*ptr = x;
	}
	void print() {
		cout << *ptr << endl;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Test t1(10);
	Test t2(t1);

	t2.set(20);

	t1.print();
	t2.print();


	return 0;
}

/*
	Output: 10 20
*/