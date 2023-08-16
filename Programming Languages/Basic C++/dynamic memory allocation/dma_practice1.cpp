#include<bits/stdc++.h>
using namespace std;

int *fun() {
	int *ptr = new int;
	*ptr = 10;
	return ptr;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x, y;
	cout << *fun() << endl;

	return 0;
}