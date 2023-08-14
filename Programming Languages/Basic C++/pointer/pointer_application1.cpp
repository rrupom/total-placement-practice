#include<bits/stdc++.h>
using namespace std;

void swap(int *p, int *q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x = 10, y = 20;
	cout << "Before swaping x and y : " << x << " " << y << endl;
	swap(&x, &y);

	cout << "After swaping x and y : " << x << " " << y << endl;


	return 0;
}