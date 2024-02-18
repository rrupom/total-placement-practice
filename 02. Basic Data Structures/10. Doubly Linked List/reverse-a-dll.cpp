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

Node* reverseDLL(Node* head) {
	if (head == NULL or head->next == NULL) return head;
	Node* prev = NULL;
	Node* cur = head;

	while (cur != NULL) {

		// swapping prev and next pointer
		prev = cur->prev;
		cur->prev = cur->next;
		cur->next = prev;

		// next iteration
		cur = cur->next;
	}

	return prev;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}