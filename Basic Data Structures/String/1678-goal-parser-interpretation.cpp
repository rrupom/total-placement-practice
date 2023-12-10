#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	string interpret(string command) {
		string result = "";

		for (int i = 0; i < command.size(); i++) {
			if (command[i] == '(' and command[i + 1] == ')') {
				result.push_back('o');
			} else if (command[i] != '(' and command[i] != ')') {
				result.push_back(command[i]);
			}
		}

		return result;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Solution sol;

	string command;
	cin >> command;
	cout << sol.interpret(command);

	return 0;
}