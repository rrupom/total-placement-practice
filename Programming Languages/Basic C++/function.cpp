#include<bits/stdc++.h>
using namespace std;

int printHello(int a = 10, int b = 20) {
	cout << a + b << endl;
	cout << "Hello Mr. Rakib Talukder Rupom" << endl;
	cout << "How about your coding preparation ?" << endl;
	return a + b;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	printHello();
	printHello(100, 200);

	return 0;
}