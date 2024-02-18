#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

void printList(Node* head) {
	while (head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << "\n";
}

void findLastNthNodeNaive(Node* head, int n) {
	Node* cur;
	int count = 0;

	for (cur = head; cur != NULL; cur = cur->next) {
		++count;
	}

	if (count < n ) {
		return;
	}

	cur = head;
	for (int i = 1; i <= count - n; i++) {
		cur = cur->next;
	}

	cout << cur->data << endl;
}

void findLastNthNodeEfficient(Node* head, int input) {
	/*
	Step 1: Move "fist pointer" input positions ahead
	Step 2: Start "second pointer" from head
	Step 3: Move both "first and second pointer" at same speed. When "first" reaches NULL
			"second" reaches the required node
	*/

	if (head == NULL) return;

	Node* first = head;
	for (int i = 0; i < input; i++) {
		if (first == NULL) return;
		first = first->next;
	}
	Node* second = head;
	while (first != NULL) {
		first = first->next;
		second = second->next;
	}

	cout << second->data << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);

	cout << "Give input of last n value" << endl;
	int input;
	cin >> input;

	findLastNthNodeNaive(head, input);
	findLastNthNodeEfficient(head, input);

	printList(head);

	return 0;
}