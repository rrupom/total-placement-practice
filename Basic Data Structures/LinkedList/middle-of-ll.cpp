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

void middleNodeNaiveSolution(Node* head) {
	// first we count how many node in the LL
	// then print count/2 number nodes data

	// if head is null / LL is empty
	if (head == NULL) return;
	int count = 0;
	Node* cur;

	for (cur = head; cur != NULL; cur = cur->next) {
		++count;
	}
	cur = head;
	for (int i = 0; i < count / 2; i++) {
		cur = cur->next;
	}
	cout << cur->data << endl;
}

void middleNodeEfficientSolution(Node* head) {
	Node* slow = head;
	Node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}

	cout << slow->data << endl;
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

	middleNodeNaiveSolution(head);

	middleNodeEfficientSolution(head);

	// printList(head);

	return 0;
}