#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int low, int high) {
	if (low == high) return true;
	if (low > high) return true;
	if (str[low] != str[high]) {
		return false;
	} else {
		return checkPalindrome(str, low + 1, high - 1);
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string str;
	cin >> str;

	bool answer = checkPalindrome(str, 0, str.size() - 1);
	cout << answer << endl;

	return 0;
}