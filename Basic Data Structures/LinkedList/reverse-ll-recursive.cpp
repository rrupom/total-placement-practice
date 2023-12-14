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

Node* reverseLLRecursive(Node* head) {
	if (head == NULL or head->next == NULL) {
		return head;
	}

	Node* rest_head = reverseLLRecursive(head->next);
	Node* rest_tail = head->next;
	rest_tail->next = head;
	head->next = NULL;
	return rest_head;
}

Node* reverseLLRecursive2(Node* head) {

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

	// Method 1
	// head = reverseLLRecursive(head);
	// printList(head);

	// Method 2
	head = reverseLLRecursive2(head);
	printList(head);

	return 0;
}