#include<bits/stdc++.h>
using namespace std;

string infixToPostfix(string infix) {
	map<char, int> precedence;
	precedence['^'] = 3;
	precedence['*'] = 2;
	precedence['/'] = 2;
	precedence['+'] = 1;
	precedence['-'] = 1;

	stack<char> operators;

	string postfix;

	for (int i = 0; i < infix.length(); i++) {
		if ((infix[i] >= 'a' and infix[i] <= 'z') or (infix[i] >= 'A' and infix[i] <= 'Z') or (infix[i] >= '0' and infix[i] <= '9')) {
			postfix = postfix + infix[i];
		} else if (infix[i] == '(' or infix[i] == '{' or infix[i] == '[') {
			// insert left parenthesis in the operator stack
			operators.push(infix[i]);
		} else if (infix[i] == ')' or infix[i] == '}' or infix[i] == ']') {
			char rev;
			if (infix[i] == ')') {
				rev = '(';
			}
			if (infix[i] == '}') {
				rev = '{';
			}
			if (infix[i] == ']') {
				rev = '[';
			}
			while (!operators.empty() and operators.top() != rev) {
				postfix += operators.top();
				operators.pop();
			}
			operators.pop();
		} else if (infix[i] == '^' or infix[i] == '*' or infix[i] == '/' or infix[i] == '+'
		           or infix[i] == '-') {

			// this part handles operator
			if (operators.empty()) {
				operators.push(infix[i]);
			} else if (precedence[infix[i]] > precedence[operators.top()]) {
				operators.push(infix[i]);
			} else if (precedence[infix[i]] < precedence[operators.top()]) {
				while (!operators.empty() and precedence[operators.top()] >= precedence[infix[i]]) {
					postfix += operators.top();
					operators.pop();
				}
				operators.push(infix[i]);
			} else {
				// same precedence. Here is not need to track of associativity. So relax
				while (!operators.empty() and precedence[operators.top()] >= precedence[infix[i]] ) {
					postfix += operators.top();
					operators.pop();
				}
				operators.push(infix[i]);
			}
		}
	}

	while (!operators.empty()) {
		postfix += operators.top();
		operators.pop();
	}

	return postfix;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string infix;
	cin >> infix;

	string postfix = infixToPostfix(infix);

	cout << postfix << endl;

	return 0;
}