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

Node* sortedInsert(Node* head, int val) {
	Node* temp = new Node(val);
	if (head == NULL) {
		return temp;
	}
	if (val <= head->data) {
		temp->next = head;
		return temp;
	}

	Node* cur = head;

	while (cur->next != NULL and cur->next->data <= val) {
		cur = cur->next;
	}

	temp->next = cur->next;
	cur->next = temp;

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

	cout << "Enter data to insert " << endl;
	int data;
	cin >> data;

	head = sortedInsert(head, data);


	printList(head);

	return 0;
}