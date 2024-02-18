### Dynamic Memory Allocation

---

**Need of dynamic memory allocation**

- Memory allocated by compiler is vanished by executing the program.
- static variable vanishes after the compilation of execution of the program
- to control over the varibale by use, we need dynamic memory allocation

---

**How to allocate and deallocate dynamic memory**

```c++
#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	static int a = 10;
	int b, c;

	int *ptr = new int[5]; // allocate memory of 5*4 bytes. Memory is a reference. So we need pointer
	int *another = new int;

	*another  = 10;

	for (int i = 0; i < 5; i++) {
		*(ptr + i) = i * 10;
	}

	cout << "Value in another pointer : " << *another << endl;
	cout << "Values in ptr pointer : " << endl;
	for (int i = 0; i < 5; i++) {
		cout << *(ptr + i) << endl;
	}

	delete another; // free memory reference by another pointer
	delete [] ptr;

    ptr = NULL;

	return 0;
}
```

---

**More on new**

- It is an operator
- It returns the pointer to the memory allocation
- Always used for dynamic memory allocation
- Calls constructors for objects of class/struct
- Can initialize value also

---

**Three types of memory allocation**

- automatic memory allocation
- dynamic memory allocation
- static memory allocation
