// union is used for typed punning

#include<bits/stdc++.h>
using namespace std;

union Test {
	int x;
	float y;
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Test t;
	t.y = 1.1;
	cout << t.x << endl; // 1066192077 (how 1.1 is reprent in memory in binary format)

	return 0;
}