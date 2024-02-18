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

Node* removeDuplicates(Node* head) {
	Node* cur = head;

	while (cur != NULL and cur->next != NULL) {
		if (cur->data == cur->next->data) {
			cur->next = cur->next->next;
			Node* temp = cur->next;
			delete temp;
		} else {
			cur = cur->next;
		}
	}

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
	head->next->next->next = new Node(30);
	head->next->next->next->next = new Node(50);

	head = removeDuplicates(head);
	printList(head);

	return 0;
}