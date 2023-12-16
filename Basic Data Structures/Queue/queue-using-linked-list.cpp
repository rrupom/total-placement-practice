#include<bits/stdc++.h>
using namespace std;

class Node {

public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

class Queue {
	Node* front;
	Node* rear;
	int size;

public:
	Queue() {
		front = NULL;
		rear = NULL;
		this->size = 0;
	}
	bool isEmpty();
	void enqueue(int);
	void dequeue();
	int frontElement();
	int rearElement();
	int queueSize();
	void display();

};

bool Queue :: isEmpty() {
	return this->size == 0;
}

void Queue :: enqueue(int data) {
	Node* temp = new Node(data);
	if (front == NULL and rear == NULL) {
		front = temp;
		rear = temp;
	} else {
		rear->next = temp;
		rear = temp;
	}

	++this->size;
}

void Queue :: dequeue() {
	// remove element from front
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		Node* temp = front;
		front = front->next;
		if (front == NULL) {
			rear = NULL;
		}

		--this->size;

		delete temp;
	}
}

int Queue :: frontElement() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		return front->data;
	}
}

int Queue :: rearElement() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		return rear->data;
	}
}

int Queue :: queueSize() {
	return this->size;
}

void Queue :: display() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		Node* cur = front;
		while (cur != NULL) {
			cout << cur->data << " ";
			cur = cur->next;
		}
		cout << endl;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.display();
	cout << q.frontElement() << endl;
	cout << q.rearElement() << endl;
	cout << q.queueSize() << endl;

	q.dequeue();

	cout << "-----" << endl;
	q.display();
	cout << q.frontElement() << endl;
	cout << q.rearElement() << endl;
	cout << q.queueSize() << endl;
	return 0;
}