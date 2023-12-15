#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* prev;
	Node* next;
	Node(int x) {
		data = x;
		prev = next = NULL;
	}
};

Node* deleteLastNodeDLL(Node* head) {
	if (head == NULL or head->next == NULL) {
		return NULL;
	}

	Node* cur = head;

	while (cur->next != NULL) {
		cur = cur->next;
	}

	// deleting link to this node from the previous node
	cur->prev->next = NULL;
	delete cur;

	return head;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}