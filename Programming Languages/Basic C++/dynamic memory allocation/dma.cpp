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