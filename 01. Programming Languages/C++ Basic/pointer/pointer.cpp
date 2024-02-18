#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x = 10;
	cout << &x << endl;

	int *ptr = &x;

	cout << ptr << endl;

	return 0;
}