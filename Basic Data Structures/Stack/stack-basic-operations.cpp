#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	stack<int> s;
	cout << "stack top : " << s.top() << endl;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.size() << endl;
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	// stack traversal
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	// time complexity and internal working
	// stack is implemented with deque
	// stack is called container adapter as it is implemented on top of other containers like
	// vector

	return 0;
}