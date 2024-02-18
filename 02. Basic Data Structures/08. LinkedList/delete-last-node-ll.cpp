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

Node* deleteLastNode(Node* head) {
	// if the head is already empty or hava single element
	if (head == NULL or head->next == NULL) {
		return NULL;
	}

	// if the linkedlist contains multiple element then we have to figure out the
	// last second element

	Node* cur = head;

	while (cur->next->next) {
		cur = cur->next;
	}
	cur->next = NULL;

	return head;
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

	head = deleteLastNode(head);

	printList(head);

	return 0;
}