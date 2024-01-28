#include<bits/stdc++.h>
using namespace std;

class Node {

public:

	int data;
	Node* prev;
	Node* next;

	Node(int data) {
		this->data = data;
		prev = next = NULL;
	}
};

class DoublyLinkedList {

private:
	Node* head;

public:
	DoublyLinkedList() {
		head = NULL;
	}

	void insertAtBegin(int data) {
		head = insertAtBeginHelper(head, data);
	}

	void traverse() {
		traverseHelper(head);
	}

	void traverseHelper(Node* head) {

		Node* cur = head;

		while (cur != NULL) {
			cout << cur->data << " ";
			cur = cur->next;
		}
	}

	Node* insertAtBeginHelper(Node* head, int data) {
		Node* temp = new Node(data);

		if (head == NULL) return temp;

		head->prev = temp;
		temp->next = head;

		return temp;
	}
};

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	DoublyLinkedList dll;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		dll.insertAtBegin(x);
	}

	dll.traverse();

	return 0;
}