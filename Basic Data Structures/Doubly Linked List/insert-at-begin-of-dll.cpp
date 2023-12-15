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

Node* insertAtBegin(Node* head, int data) {
	Node* temp = new Node(data);
	if (head == NULL) {
		return temp;
	}
	head->prev = temp;
	temp->next = head;
	return temp;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}