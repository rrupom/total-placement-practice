// given a string text and pattern. Find if
// a permutation of the pattern exists in the text

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string text;
	string pattern;
	cin >> text >> pattern;

	do {
		if (text.find(pattern)) {
			cout << "YES\n";
			break;
		}
	} while (next_permutation(pattern.begin(), pattern.end()));

	return 0;
}