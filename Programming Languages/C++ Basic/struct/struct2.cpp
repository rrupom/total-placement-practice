#include<bits/stdc++.h>
using namespace std;

struct Student {
	int rollNo;
	string name;
	string address;
};

struct Point {
	int x;
	int y;
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Student s = {104, "rakib", "sirajganj"};

	cout << s.rollNo << " " << s.name << " " << s.address << endl;

	Point p = {.x = 100, .y = 200}; // designated initialization. In this process we can skip some declaration
	cout << p.x << " " << p.y << endl;

	Point q = {.y = 20};
	cout << q.x << " " << q.y << endl;

	Point r;
	cout << r.x << " " << r.y << endl; // random value in x and y. as both of them are not initialized


	return 0;
}

/*
	If we do not use any initialization then varibales may give random value as output
*/