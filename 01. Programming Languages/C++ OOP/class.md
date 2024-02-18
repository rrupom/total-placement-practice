**Initialization List**

```c++
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
	Main() {
		t = Test(10);
	}
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
Default
Parameterized constructor
*/

```

- member will initialize with default parameters. then the constructor will be called
- so each member will be initialized twice. first will default constructor and then with parameterized constructor

---

**But if we use initializer list then every member will be initialized onece. Either with parameterized constructor or default constructor**

```c++
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

```

---

**copy constructor**

```c++
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
	Test t2(t1); // copy constructor

	t2.set(20);
	t1.print();
	t2.print();


	return 0;
}

/*
output: 20 20
*/

```

- t2 initializes with t1 object. which is copying t1's member variables and methods. In case of pointer copying address is copied. so no new memory is allocated
- it is shallow copying
- default copy constructor makes shallow copy

---

**Deep copying constructor with code**

```c++
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
	Test(Test &t) {
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
```

---

**When memory is dynamically allocated, we need to implement our own destructor to deallocate the memory**
