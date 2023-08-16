#include<bits/stdc++.h>
using namespace std;

union Test {
	int x;
	char bin[4];
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Test t;
	t.x = 512;
	cout << (int)t.bin[0] << " " << (int)t.bin[1] << " " << (int)t.bin[2] << " " << (int)t.bin[3] << endl;

	return 0;
}