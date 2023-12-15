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

Node* insertEndNaive(Node* head, int x) {
	Node* temp = new Node(x);
	if (head == NULL) {
		temp->next = temp;
		return temp;
	} else {
		Node* cur = head;
		while (cur->next != head) {
			cur = cur->next;
		}

		temp->next = cur->next;
		cur->next = temp;
		return head;
	}
}

Node* insertEndEfficient(Node* head, int x) {
	Node* temp = new Node(x);

	if (head == NULL) {
		temp->next = temp;
		return temp;
	} else {

		// linking
		temp->next = head->next;
		head->next = temp;

		// swapping data
		int tempData = head->data;
		head->data = temp->data;
		temp->data = tempData;

		return temp;
	}
}


int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}