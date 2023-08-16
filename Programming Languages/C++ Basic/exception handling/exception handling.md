### Exception Handling in C++

---

**Conditions when exception raises**

- divide by zero
- no heap memory available
- accessing array elements outside the allowed index range
- pop from an empty stack
- pushing element into the stack when it reaches the end of the stack

---

**Three keywords are used in c++ to handling exceptions**

- try
- throw
- catch

---

**Stack Unwinding**

- if exception is thrown in a program, the runtime system starts unwinding the stack, which means it begins to search for the appropriate exception handler that can handle the thrown exception. If the caller has not any handler function then caller search in the caller of the caller function for handler function

```c++
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

```
