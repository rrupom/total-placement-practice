// given a string text and pattern. Find if
// a permutation of the pattern exists in the text

#include<bits/stdc++.h>
using namespace std;

bool anagram(string text, string pattern) {
	int freq[256];
	fill(freq, freq + 256, 0);
	for (int i = 0; i < text.size(); i++) {
		freq[text[i]]++;
		freq[pattern[i]]--;
	}

	for (int i = 0; i < 256; i++) {
		if (freq[i] != 0) {
			return false;
		}
	}

	return true;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string text, pattern;
	cin >> text >> pattern;

	int tl = text.size();
	int pl = pattern.size();

	bool flag = false;

	for (int i = 0; i < tl - pl - 1; i++) {
		if (anagram(text.substr(i, pl), pattern)) {
			cout << "YES\n";
			flag  = true;
			break;
		}
	}
	if (!flag) cout << "NO\n";

	return 0;
}