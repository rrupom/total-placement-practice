#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int arr[] = {10, 20};

	int *p1 = arr;
	int *p2 = arr;
	int *p3 = arr;

	++*p1; // same associativity of ++ and *. both have right to left associativity
	*p2++; // postfix ++ have higher precedence over * operator. so operation will be *(p2++)
	*++p3;

	cout << arr[0] << " " << arr[1] << " " << *p1 << endl;
	cout << arr[0] << " " << arr[1] << " " << *p2 << endl;
	cout << arr[0] << " " << arr[1] << " " << *p3 << endl;
	return 0;
}