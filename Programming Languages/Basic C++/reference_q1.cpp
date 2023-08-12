#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x = 10, z = 20;
	int &y = x;
	y = z;
	y = y + 5;

	cout << x << " " << y << " " << z << endl;

	return 0;
}