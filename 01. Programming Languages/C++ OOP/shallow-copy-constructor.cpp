#include<bits/stdc++.h>
using namespace std;

class Test {
	int *ptr;

public:
	Test(int x) {
		ptr = new int(x);
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