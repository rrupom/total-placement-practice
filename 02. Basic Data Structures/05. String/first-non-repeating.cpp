// find the index of the leftmost non repeating character of the string

#include<bits/stdc++.h>
using namespace std;

int fistNonRepeating(string s) {
	int res = INT_MAX;
	int freq[256];
	fill(freq, freq + 256, -1);

	for (int i = 0; i < s.size(); i++) {
		if (freq[s[i]] == -1) {
			freq[s[i]] = i;
		} else {
			freq[s[i]] = -2;
		}
	}

	for (int i = 0; i < 256; i++) {
		if (freq[i] >= 0) {
			res = min(res, freq[i]);
		}
	}

	return res == INT_MAX ? -1 : res;
}

int fistNonRepeating2(string s) {
	int freq[256];
	fill(freq, freq + 256, 0);

	for (int i = 0; i < s.size(); i++) {
		freq[s[i]]++;
	}

	for (int i = 0; i < s.size(); i++) {
		if (freq[s[i]] == 1) return i;
	}
	return -1;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;
	cout << fistNonRepeating(s) << endl;;
	cout << fistNonRepeating2(s) << endl;

	return 0;
}