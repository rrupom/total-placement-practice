#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int arr[] = {1, 2, 3};
	int *ptr = arr;

	cout << sizeof(arr) << endl; // size of array
	cout << sizeof(ptr) << endl; // size of address. it does not depend on data type

	char arrc[] = {1, 2, 3};
	char *ptrc;

	cout << sizeof(arrc) << endl;
	cout << sizeof(ptrc) << endl;


	return 0;
}