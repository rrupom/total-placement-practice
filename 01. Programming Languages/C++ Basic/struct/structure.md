### Some important notes on structure and point

- In C, struct key must be used in varibale decalaration of type struct

- If we use structure pointer to access structure varibale then we use -> for accessing member varibale

---

### Differences between struct and class

- Members of struct is by default public. But members of class are by default private
- Rest of the functionalities are same.
- When we need to grip over data hidence then we use class. But in other cases we can use struct

---

### Structure alignment

```c++
#include<bits/stdc++.h>
using namespace std;

struct S1 {
	char c1;
	double d1;
	char c2;
};

struct S2 {
	char c1;
	char c2;
	double d1;
};

struct S3 {
	double d1;
	char c1;
	char c3;
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "Size of structure S1 = " << sizeof(S1) << endl; // 24
	cout << "Size of structure S2 = " << sizeof(S2) << endl; // 16
	cout << "Size of structure S2 = " << sizeof(S3) << endl; // 16
	return 0;
}
```

- Here in the first structure, c1 occupy 1 byte. But as second varibale is double, it needs 7 byte padding. then 1 byte for c2 and extra 7 byte padding. Total 24 byte

- Here in second structure, c1 and c2 occupy 2 bytes. But as third varibale is double, it needs extra 6 bit padding. Total 2+6+8 = 16 by

- Here in the third structure, as d1 is double it needs 8 byte, c1 and c2 needs 2 byte with extra 6 byte padding. 8+2+6 = 16 byte total
- In case of struct, order the varibales either lower to higher or higher to lower byte requirements.

---

### Reasons for Alignment

- Physical memory is accessed in the form of word. (4 bytes in a 32 bit machine and 8 bytes in a 64 bit machine). It requires more cpu cycle

- Without alignment, it is inefficient to store variable that span accross multiple words

---

### Packed version of strucure that takes exact bytes

```c++
struct S4 {
	double d1;
	char c1;
	char c2;
} __attribute__((packed));

```
