#include<bits/stdc++.h>
using namespace std;

union Test {
	int x;
	int y;
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Test t;
	t.x = 10;
	cout << t.x << " " << t.y << endl;
	t.y = 20;
	cout << t.x << " " << t.y << endl;
	cout << sizeof(t);


	return 0;
}