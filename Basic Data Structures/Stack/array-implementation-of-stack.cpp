#include<bits/stdc++.h>
using namespace std;

class Stack {

private:
	int* arr;
	int tp;
	int maxSize;

public:
	Stack(int size) {
		this->maxSize = size;
		this->tp = -1;
		this->arr = new int[maxSize];
	}

	~Stack() {
		delete []arr;
	}

	bool isOverflowed() {
		if (tp >= maxSize - 1) {
			cout << "Stack Overflow" << endl;
			return true;
		}
		return false;
	}

	bool isUnderflowed() {
		if (tp <= -1) {
			cout << "Stack underflow" << endl;
			return true;
		}
		return false;
	}

	bool isEmpty() {
		if (tp == -1) {
			return true;
		}

		return false;
	}

	void push(int value) {
		if (!isOverflowed()) {
			arr[++tp] = value;
		}
	}

	void pop() {
		if (!isUnderflowed()) {
			--tp;
		}
	}

	int top() {
		if (isEmpty()) {
			cout << "Stack Empty" << endl;
			return -1;
		}
		return arr[tp];
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Stack stack(3);
	stack.push(10);
	stack.push(20);
	stack.push(30);

	cout << stack.top() << endl;
	stack.pop();
	cout << stack.top() << endl;
	stack.pop();
	stack.pop();
	stack.top();
	stack.pop();
	// stack.push(40);
	// stack.push(50);

	return 0;
}