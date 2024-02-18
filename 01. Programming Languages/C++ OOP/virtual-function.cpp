#include<bits/stdc++.h>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "Drawing a shape" << endl;
	}
};

class Circle : public Shape {
public:
	void draw() override {
		cout << "Drawing a circle" << endl;
	}
};

class Square : public Shape {
public:
	void draw() override {
		cout << "Drawing a square" << endl;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Shape shape;
	shape.draw();

	Circle circle;
	circle.draw();

	Shape* shape2 = &circle;
	shape2->draw();

	int a = -2;
	cout << a << endl;

	return 0;
}