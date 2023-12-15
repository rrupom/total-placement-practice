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

Node* insertAtEnd(Node* head, int data) {
	Node* temp = new Node(data);
	if (head == NULL) {
		return temp;
	}

	Node* cur = head;
	while (cur->next != NULL) {
		cur = cur->next;
	}

	cur->next = temp;
	temp->prev = cur;

	return head;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}