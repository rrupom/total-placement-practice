#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s) {
	stack<char> stack;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
			stack.push(s[i]);
		} else {
			if (stack.empty()) return false;
			else if ((s[i] == ')' and stack.top() != '(') or (s[i] == '}' and stack.top() != '{')
			         or (s[i] == ']' and stack.top() != '[')) {
				return false;
			} else {
				stack.pop();
			}
		}
	}

	if (stack.empty()) return true;
	return false;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;
	bool balanced = isBalanced(s);
	if (balanced) cout << "Balanced" << endl;
	else cout << "Not balanced" << endl;

	return 0;
}