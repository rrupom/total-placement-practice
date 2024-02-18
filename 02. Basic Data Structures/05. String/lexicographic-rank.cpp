// given a string, find lexicographic rank of it

#include<bits/stdc++.h>
using namespace std;

int countSmall(string s, char ch) {
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] < ch) {
			count++;
		}
	}

	return count;
}

vector<int> calculateFactorial(int n) {
	vector<int> ans(n + 1);
	ans[0] = 1;
	for (int i = 1; i <= n; i++) {
		ans[i] = i * ans[i - 1];
	}

	return ans;
}

int lexicographicRank(string s) {
	int total = 0;

	int ln = s.size();
	vector<int> factorial = calculateFactorial(ln);

	for (int i = 0; i < ln; i++) {
		int remainingPositions = ln - i - 1;
		int smallCharacters = countSmall(s.substr(i + 1, remainingPositions), s[i]);
		total += smallCharacters * factorial[remainingPositions];
	}

	return total + 1;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;
	cout << "Lexicographic rank is " << lexicographicRank(s);

	return 0;
}