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

Node* insertAtEnd(Node* head, int data) {
	if (head == NULL) {
		return new Node(data);
	}

	Node* cur = head;
	while (cur->next) {
		cur = cur->next;
	}

	cur->next = new Node(data);

	return head;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Node* head = NULL;
	head = insertAtEnd(head, 10);
	head = insertAtEnd(head, 20);
	printList(head);

	return 0;
}