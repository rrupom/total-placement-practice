#include<bits/stdc++.h>
using namespace std;

struct Point {
	int x;
	int y;
};

typedef struct Point2 {
	int x;
	int y;
} point;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	struct Point p; // "struct" is optional in c++
	cin >> p.x;
	cin >> p.y;

	cout << p.x << " " << p.y << endl;

	point pp;
	cin >> pp.x >> pp.y;
	cout << pp.x << " " << pp.y << endl;

	return 0;
}