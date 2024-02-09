#include<bits/stdc++.h>
using namespace std;

class MinHeap {
	int *arr;
	int size;
	int capacity;

public:
	MinHeap(int capacity) {
		this->capacity = capacity;
		this->size = 0;
		this->arr = new int[capacity];
	}

	void insert(int data) {
		if (size >= capacity) {
			cout << "over the capacity" << endl;
			return;
		}
		arr[size] = data;
		heapify(size);
		size++;
	}

	void minHeapify(int i) {
		int left = getLeft(i);
		int right = getRight(i);
		int smallest = I;

		if (left < size and arr[smallest] > arr[left]) {
			smallest = left;
		}
		if (right <size and arr[smallest] > arr[right]) {
			smallest = right;
		}
		if (smallest != i) {
			swap(arr[i], arr[smallest]);
			minHeapify(smallest);
		}
	}

	int extractMin() {
		if (size == 0) {
			return INT_MIN;
		}

		if (size == 1) {
			size--;
			return arr[0];
		}

		swap(arr[0], arr[size - 1]);
		size--;

		minHeapify(0);

		return arr[size];
	}

	void heapify(int size) {
		while (size != 0 and arr[getParent(size)] > arr[size] ) {
			swap(arr[getParent(size)], arr[size]);
			size = getParent(size);
		}
	}

	void printHeap() {
		for  (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
	}

	int getLeft(int i) {
		return (2 * i) + 1;
	}
	int getRight(int i) {
		return (2 * i ) + 2;
	}
	int getParent(int i) {
		return (i - 1) / 2;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	MinHeap mh(10);

	mh.insert(10);
	mh.insert(20);
	mh.insert(15);
	mh.insert(40);
	mh.insert(50);
	mh.insert(100);
	mh.insert(25);
	mh.insert(45);
	mh.insert(12);

	mh.printHeap();

	return 0;
}
