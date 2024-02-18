#include<bits/stdc++.h>
using namespace std;

struct Student {
	int rollNo;
	string name;
	string address;
	int age;
	string section;
};

// this is very inefficient. Because it creates a copy of main variable
void normalPass(Student rakib) {
	cout << rakib.rollNo << " " << rakib.name << " " << rakib.address << " " << rakib.age << " " << rakib.section << endl;
}


// it is efficinet
void passByReference(Student &rakib) {
	cout << rakib.rollNo << " " << rakib.name << " " << rakib.address << " " << rakib.age << " " << rakib.section << endl;
}

void passByPointer(Student *rakib) {
	cout << rakib->rollNo << " " << rakib->name << " " << rakib->address << " " << rakib->age << " " << rakib->section << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Student rakib = {
		104,
		"rakib",
		"sirajganj",
		23,
		"B"
	};

	normalPass(rakib);
	passByReference(rakib);
	passByPointer(&rakib);

	return 0;
}