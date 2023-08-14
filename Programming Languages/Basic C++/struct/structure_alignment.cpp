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

// compact sizing of struture
struct S4 {
	double d1;
	char c1;
	char c2;
} __attribute__((packed));

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "Size of structure S1 = " << sizeof(S1) << endl; // 24
	cout << "Size of structure S2 = " << sizeof(S2) << endl; // 16
	cout << "Size of structure S3 = " << sizeof(S3) << endl; // 16
	cout << "Size of structure S4 = " << sizeof(S4) << endl;
	return 0;
}