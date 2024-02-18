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

Node* insertAtBegin(Node* head, int data) {
	Node* temp = new Node(data);
	temp->next = head;
	return temp;
}

void printList(Node* head) {
	while (head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << "\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Node *head = NULL;
	head = insertAtBegin(head, 30);
	head = insertAtBegin(head, 20);
	head = insertAtBegin(head, 10);

	printList(head);

	return 0;
}