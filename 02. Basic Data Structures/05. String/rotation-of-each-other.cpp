// Given two strings, check if they are rotations of each other

#include<bits/stdc++.h>
using namespace std;

bool arrRotation(string s, string t) {
	if (s.size() != t.size()) return false;
	s = s + s;
	return s.find(t);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s, t;
	cin >> s >> t;

	cout << arrRotation(s, t);

	return 0;
}