#include<bits/stdc++.h>
using namespace std;

void printSubs(string str, string cur = "", int index = 0) {
	if (index == str.size()) {
		if (cur == "") {
			cout << "Empty String" << endl;
		} else {
			cout << cur << endl;
		}

		return;
	}

	printSubs(str, cur, index + 1);
	printSubs(str, cur + str[index], index + 1);

}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string str;
	cin >> str;

	printSubs(str);


	return 0;
}