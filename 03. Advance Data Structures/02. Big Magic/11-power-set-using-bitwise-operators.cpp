/*
	Problem : Suppose a string is given. Output all the power sets of that string
	I/P: abc
	O/P: "", a, b, c, ab, ac, bc, abc
*/

#include<bits/stdc++.h>
using namespace std;

vector<string> findPowerSet(string str) {
	vector<string> answer;

	int sz = str.length();
	int powSz = pow(2, sz);


	for (int i = 0; i < powSz; i++) {
		string ans = "";
		for (int j = 0; j < sz; j++) {
			if ((i & (1 << j))) {
				ans += str[j];
			}
		}

		answer.push_back(ans);
	}

	return answer;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("E:/Codes/input.txt", "r", stdin);
	freopen("E:/Codes/output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;

	vector<string> answer = findPowerSet(str);

	for (int i = 0; i < answer.size(); i++) {
		if (answer[i] == "") {
			cout << "Empty string\n";
		} else {
			cout << answer[i] << "\n";
		}
	}

	return 0;
}

/*
input: abc
*/

/*
output:
Empty string
a
b
ab
c
ac
bc
abc
*/