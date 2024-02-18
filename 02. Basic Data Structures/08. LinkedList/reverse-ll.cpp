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

Node* revarseLLNaive(Node* head) {
	vector<int> arr;

	for (Node* cur = head; cur != NULL; cur = cur->next) {
		arr.push_back(cur->data);
	}

	for (Node *cur = head; cur != NULL; cur = cur->next) {
		cur->data = arr.back();
		arr.pop_back();
	}

	return head;
}

Node* revarseLLEfficient(Node* head) {
	Node* prev = NULL;
	Node* cur = head;

	while (cur != NULL) {
		Node* next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}

	head = prev;
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

	// Efficient Solution
	head = revarseLLEfficient(head);
	printList(head);

	// Naive Solution
	// Node *head2 = revarseLLNaive(head);
	// printList(head2);

	return 0;
}