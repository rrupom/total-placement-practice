#include<bits/stdc++.h>
using namespace std;

int postfixEvaluation(string postfix) {
	stack<int> st;

	for (int i = 0; i < postfix.length(); i++) {
		if (postfix[i] != '*' and postfix[i] != '/' and postfix[i] != '+' and postfix[i] != '-') {
			st.push(postfix[i] - '0');
		} else {
			int op1 = st.top();
			st.pop();
			int op2 = st.top();
			st.pop();

			int result;

			if (postfix[i] == '*') {
				result = op2 * op1;
			}
			else if (postfix[i] == '/') {
				result = op2 / op1;
			}
			else if (postfix[i] == '+') {
				result = op2 + op1;
			} else {
				result = op2 - op1;
			}


			st.push(result);
		}
	}

	return st.top();
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string postfix;
	cin >> postfix;

	int ans = postfixEvaluation(postfix);

	cout << ans << endl;

	return 0;
}