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

Node* insertAtPosition(Node* head, int position, int data) {
	Node* temp = new Node(data);
	if (position == 1) {
		temp -> next = head;
		return temp;
	}

	Node* cur = head;

	for (int i = 1; i <= position - 2 and cur != NULL; i++) {
		cur = cur->next;
	}

	if (cur == NULL) return head;

	temp->next = cur->next;
	cur -> next = temp;

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

	cout << "Enter position and data :\n";
	int position, data;
	cin >> position >> data;
	head = insertAtPosition(head, position, data);

	printList(head);

	return 0;
}