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

Node* insertBeginNaive(Node* head, int x) {
	Node* temp = new Node(x);
	if (head == NULL) {
		temp->next = temp;
	} else {
		Node* cur = head;
		while (cur->next != head) {
			cur = cur->next;
		}
		cur->next = temp;
		temp->next = head;
	}

	return temp;
}

Node* insertBeginEfficient(Node* head, int x) {
	Node* temp = new Node(x);
	if (head == NULL) {
		temp->next = temp;
		return temp;
	} else {
		temp->next = head->next;
		head->next = temp;
		int d = head->data;
		head->data = temp->data;
		temp->data = d;

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