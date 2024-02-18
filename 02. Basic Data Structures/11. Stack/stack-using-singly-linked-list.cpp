#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int n) {
		this->data = n;
		this->next = NULL;
	}
};

class Stack {
	Node* top;

public:
	Stack() {
		top = NULL;
	}

	void push(int data) {
		Node* temp = new Node(data);

		if (!temp) {
			cout << "Stack overflow" << endl;
			exit(1);
		}

		// this is the first element
		if (top == NULL) {
			top = temp;
		} else {
			// element has already present
			temp->next = top;
			top = temp;
		}
	}

	void display() {
		if (top == NULL) {
			cout << "Stack is empty" << endl;
		} else {
			Node* cur = top;
			while (cur != NULL) {
				cout << cur->data << " ";
				cur = cur->next;
			}
			cout << endl;
		}
	}

	void pop() {
		if (top == NULL) {
			cout << "Stack underflow" << endl;
			exit(1);
		} else {
			Node* temp = top;
			top = top->next;

			delete temp;
		}
	}

	int peek() {
		if (!isEmpty()) {
			return top->data;
		} else {
			exit(1);
		}
	}

	bool isEmpty() {
		return top == NULL;
	}

};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Stack s;

	// pushing element in the stack
	s.push(11);
	s.push(22);
	s.push(33);
	s.push(44);

	s.display();

	s.push(55);

	s.pop();

	s.display();

	return 0;
}