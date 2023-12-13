#include<bits/stdc++.h>
using namespace std;

// sort points according to increasing order of x

struct Point {
	int x;
	int y;
};

bool myCMP(Point p1, Point p2) {
	return p1.x < p2.x;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Point arr[] = {
		{3, 10},
		{2, 8},
		{5, 4}
	};

	sort(arr, arr + 3, myCMP);

	for (auto it : arr) {
		cout << it.x << " " << it.y << endl;
	}

	return 0;
}