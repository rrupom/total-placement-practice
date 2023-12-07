#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2) {
	int arr[256] = {0};

	for (int i = 0; i < s1.size(); i++) {
		arr[s1[i]]++;
		arr[s2[i]]--;
	}

	for (int i = 0; i < 256; i++) {
		if (arr[i] != 0) return false;
	}

	return true;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s1, s2;
	cin >> s1 >> s2;
	anagram(s1, s2) == 1 ? cout << "Anagram\n" : cout << "No anagram\n";

	return 0;
}