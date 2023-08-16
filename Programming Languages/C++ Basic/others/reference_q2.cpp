#include<bits/stdc++.h>
using namespace std;

int &fun() {
	static int x = 10;
	return x;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int &z = fun();
	cout << fun() << " ";
	z = 30;
	cout << fun();

	return 0;
}