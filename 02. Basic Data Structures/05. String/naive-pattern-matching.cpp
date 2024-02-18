#include<bits/stdc++.h>
using namespace std;

void matchPatterns(string text, string pattern) {
	int lt = text.size();
	int lp = pattern.size();

	for (int i = 0; i < lt - lp + 1; i++) {
		string sub = text.substr(i, lp);
		if (sub == pattern) {
			cout << i << " ";
		}
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string text, pattern;
	cin >> text >> pattern;

	matchPatterns(text, pattern);

	return 0;
}