// Given a string, find the leftmost character that repeats

#include<bits/stdc++.h>
using namespace std;

int firstRepeating(string s) {
	int res = INT_MAX;
	int freq[256];
	fill(freq, freq + 256, -1);
	for (int i = 0; i < s.size(); i++) {
		if (freq[s[i]] == -1) {
			freq[s[i]] = i;
		} else {
			res = min(res, freq[s[i]]);
		}
	}

	if (res == INT_MAX) {
		return -1;
	}

	return res;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;
	int ans = firstRepeating(s);
	if (ans == -1) {
		cout << "No repeating character\n";
	} else {
		cout << "First index is : " << ans << endl;
	}
	return 0;
}