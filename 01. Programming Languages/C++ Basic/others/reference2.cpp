/*
	Modification in for each loop
*/

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v{10, 20, 30, 40};

	for (auto &x : v) {
		x += 10;
	}

	for (auto &x : v) {
		cout << x << " ";
	}

	return 0;
}