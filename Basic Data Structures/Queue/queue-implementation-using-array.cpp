// inefficient implementation
// waste of memory in the arry

#include<bits/stdc++.h>
using namespace std;

class Queue {
	int size;
	int *arr;
	int capacity;

public:
	Queue(int size) {
		this->capacity = size;
		this->size = 0;
		this->arr = new int[size];
	}

	void enqueue(int);
	void dequeue();
	int getFront();
	int getRear();
	bool isFull();
	bool isEmpty();
	int ssize();
	void display();
};

void Queue :: display() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		for (int i = 0; i < this->size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}

bool Queue :: isFull() {
	return this->size == this->capacity;
}

bool Queue :: isEmpty() {
	return this->size == 0;
}

void Queue :: enqueue(int data) {
	if (isFull()) {
		cout << "Queue is full" << endl;
		exit(1);
	} else {
		arr[this->size++] = data;
	}
}

void Queue :: dequeue() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		for (int i = 0; i < this->size - 1; i++) {
			arr[i] = arr[i + 1];
		}
		this->size--;
	}
}

int Queue :: ssize() {
	return this->size;
}

int Queue :: getFront() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		return arr[size];
	}
}

int Queue :: getRear() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
	} else {
		return arr[0];
	}
}



int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Queue q(10);
	q.enqueue(10);
	q.enqueue(20);
	cout << q.ssize() << endl;
	q.display();

	q.dequeue();
	cout << q.ssize() << endl;
	q.display();

	return 0;
}