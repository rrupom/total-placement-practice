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

Node* deleteHeadDLL(Node* head) {
	if (head == NULL or head->next == NULL) return NULL;
	Node* temp = head;
	head = head->next;
	head->prev = NULL;
	delete temp;

	return head;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}