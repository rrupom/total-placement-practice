#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

// as like integer and character, linkedlist variable are also passed by value. this head variable
// is a copy of main function's head
void printList(Node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void recursivePrint(Node* head) {
	if (head == NULL) {
		cout << "\n";
		return;
	}
	cout << head->data << " ";
	recursivePrint(head->next);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	Node* head = new Node(10);
	printList(head);
	// printList(head);
	recursivePrint(head);

	return 0;
}