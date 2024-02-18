#include<bits/stdc++.h>
using namespace std;

class Queue {
public:
	stack<int> st1, st2;

	void enQueue(int data) {

		// removing all items from stack1
		while (!st1.empty()) {
			st2.push(st1.top());
			st1.pop();
		}

		// lastest data need to be deleted last
		st1.push(data);

		// insert all data from stack2 to stack1

		while (!st2.empty()) {
			st1.push(st2.top());
			st2.pop();
		}

	}

	int deQueue() {
		if (st1.empty()) {
			return -1;
		} else {
			int x = st1.top();
			st1.pop();
			return x;
		}
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Queue q;
	q.enQueue(10);
	q.enQueue(20);

	cout << q.deQueue();

	return 0;
}