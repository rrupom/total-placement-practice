#include<bits/stdc++.h>
using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point(): x(0), y(0) {}
	Point(int x1, int y1): x(x1), y(y1) {}
	void Print() {
		cout << x << " " << y << endl;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Point p1, p2(1, 2);
	p1.Print();
	p2.Print();

	Point *ptr = new Point(5, 6);
	ptr->Print();

	return 0;
}