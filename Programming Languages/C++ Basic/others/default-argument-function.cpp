#include<bits/stdc++.h>
using namespace std;

int add(int a, int b, int c = 0, int d = 0) {
	// default parameter can be last one or backwar
	return a + b + c + d;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << add(10, 20) << endl;
	cout << add(30, 40, 50) << endl;
	cout << add(50, 60, 70, 80) << endl;

	return 0;
}