#include<bits/stdc++.h>
using namespace std;

class Queue {
	int *arr;
	int front;
	int capacity;
	int size;

public:
	Queue(int size) {
		this->arr = new int[size];
		this->front = 0;
		this->capacity = size;
		this->size = 0;
	}

	bool isEmpty();
	bool isFull();
	int getFront();
	int getRear();

	/*
	rear = (front + size -1) % capacity
	rear = (rear + 1) % capacity
	arr[rear] = data
	size++
	*/
	void enqueue(int);


	void dequeue();

	int getFrontElement();

	int getRearElement();

	int queueSize();
	void display();
};


bool Queue :: isFull() {
	return this->capacity == this->size;
}

bool Queue :: isEmpty() {
	return this->size == 0;
}

int Queue :: getFront() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		return this->front;
	}
}

int Queue :: getRear() {
	if (isFull()) {
		cout << "Queue is full" << endl;
		exit(1);
	} else {
		return (this->front + this->size - 1 ) % this->capacity;
	}
}

void Queue :: enqueue(int data) {
	if (isFull()) {
		cout << "Queue is full" << endl;
		exit(1);
	} else {
		int rear = getRear();
		rear = (rear + 1) % this->capacity;
		this->arr[rear] = data;
		this->size++;
	}
}

void Queue :: dequeue() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		this->front = (this->front + 1) % capacity;
		this->size--;
	}
}

void Queue :: display() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		for (int i = this->front; i != (this->front + this->size) % this->capacity; i = (i + 1) % this->capacity) {
			cout << this->arr[i] << " ";
		}
		cout << endl;
	}
}

int Queue :: getFrontElement() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		return arr[this->front];
	}
}

int Queue :: getRearElement() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		exit(1);
	} else {
		int rear = (this->front + this->size - 1 ) % this->capacity;
		return arr[rear];
	}
}

int Queue :: queueSize() {
	return this->size;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Queue q(10);
	q.enqueue(10);
	q.enqueue(20);
	q.display();
	cout << q.getFrontElement() << endl;
	cout << q.queueSize() << endl;

	cout << "----" << endl;

	q.dequeue();
	q.display();
	cout << q.queueSize() << endl;

	return 0;
}