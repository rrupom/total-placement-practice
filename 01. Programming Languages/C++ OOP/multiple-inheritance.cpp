#include<bits/stdc++.h>
using namespace std;

class BaseClass1 {
public:
	BaseClass1() {
		cout << "BaseClass1 contructor called" << endl;
	}
};

class BaseClass2 {
public:
	BaseClass2() {
		cout << "BaseClass2 contructor called" << endl;
	}
};

class DerivedClass: public BaseClass1, public BaseClass2 {
public:
	DerivedClass() {
		cout << "DerivedClass contructor called" << endl;
	};
};

int main() {
	DerivedClass derived_class;

	return 0;
}

/*
input:

*/

/*
output:

BaseClass1 contructor called
BaseClass2 contructor called
DerivedClass contructor called

*/