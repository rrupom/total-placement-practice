**Union is a user defined data dype like Struct in C++**

---

**It will allocate total memory size of the largest member element**

```
union Test {
	int x;
	int y;
};

```

This will allocate 4 byte of memory

---

**All the members of the union access same memory location at a time**

```c++
#include<bits/stdc++.h>
using namespace std;

union Test {
	int x;
	int y;
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Test t;
	t.x = 10;
	cout << t.x << " " << t.y << endl; // 10 10
	t.y = 20;
	cout << t.x << " " << t.y << endl; // 20 20
	cout<< sizeof(t); // 4


	return 0;
}
```

---

**Application of Union**

- Type Punning

```
// union is used for typed punning

#include<bits/stdc++.h>
using namespace std;

union Test {
	int x;
	float y;
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Test t;
	t.y = 1.1;
	cout << t.x << endl; // 1066192077 (how 1.1 is reprent in memory in binary format)

	return 0;
}
```

```
#include<bits/stdc++.h>
using namespace std;

union Test {
	int x;
	char bin[4];
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Test t;
	t.x = 512;
	cout << (int)t.bin[0] << " " << (int)t.bin[1] << " " << (int)t.bin[2] << " " << (int)t.bin[3] << endl;

	return 0;
}

```
