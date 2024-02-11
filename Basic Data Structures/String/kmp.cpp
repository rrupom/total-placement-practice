#include<bits/stdc++.h>
using namespace std;

vector<int> createLPS(string pattern) {
	vector<int> lps(pattern.size());

	int index = 0;

	for (int i = 1; i < pattern.size();) {
		if (pattern[index] == pattern[i]) {
			lps[i] = index + 1;
			++index, ++i;
		} else {
			if (index != 0) {
				index = lps[index - 1];
			} else {
				// lps[index] = index; already has 0
				++i;
			}
		}
	}

	return lps;
}

void kmp(string text, string pattern) {
	vector<int> lps = createLPS(pattern);
	bool found = false;
	int i = 0, j = 0; // i -> text, j ->p pattern
	while (i < text.size()) {
		if (text[i] == pattern[j]) {
			++i, ++j;
		} else {
			if (j != 0) {
				j = lps[j - 1];
			} else {
				++i;
			}
		}

		if (j == pattern.size()) {
			cout << "Found\n";
			cout << "index = " << i - pattern.size() << "\n";
			found = true;
		}
	}
	if (!found) cout << "Not found\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string text, pattern;
	getline(cin, text);
	getline(cin, pattern);

	kmp(text, pattern);


	return 0;
}
