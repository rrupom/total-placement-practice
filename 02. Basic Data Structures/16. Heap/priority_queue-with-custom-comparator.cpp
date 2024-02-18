#include<bits/stdc++.h>
using namespace std;

class Person {
public:
	int age;
	double height;

	Person(int age, double height) {
		this->age = age;
		this->height = height;
	}
};

class MyCMP {
public:
	bool operator()(Person const &p1, Person const &p2) {
		return p1.height < p2.height;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	priority_queue<Person, vector<Person>, MyCMP > pq;
	pq.push(Person(10, 5.4));
	pq.push(Person(20, 4.5));
	pq.push(Person(23, 6.1));

	while (!pq.empty()) {
		Person p = pq.top();
		cout << p.age << " " << p.height << endl;
		pq.pop();
	}

	return 0;
}