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

Node* deleteHeadNaive(Node* head) {
	if (head == NULL or head->next == head) {
		delete head;
		return NULL;
	}
	Node* cur = head;
	while (cur->next != head) {
		cur = cur->next;
	}

	cur->next = head->next;
	delete head;
	return cur->next;
}

Node* deleteHeadEfficient(Node* head) {
	if (head == NULL or head->next == head) {
		delete head;
		return NULL;
	} else {
		// copy content of next element to this element
		// then delete next node
		head->data = head->next->data;
		Node* temp = head->next;
		head->next = temp->next;
		delete temp;
		return head;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}