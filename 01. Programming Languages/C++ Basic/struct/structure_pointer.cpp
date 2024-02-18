#include<bits/stdc++.h>
using namespace std;

struct Point {
	int x;
	int y;
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Point p = {10, 20};
	Point *ptr = &p;

	cout << ptr->x << endl;
	ptr->x = 100;
	cout << p.x << endl;

	Point arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i].x = i;
		arr[i].y = i * 10;
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i].x << " " << arr[i].y << endl;
	}

	return 0;
}