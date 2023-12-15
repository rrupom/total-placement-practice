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

Node* deleteKthNodeNaive(Node* head, int k) {
	if (head == NULL) {
		return NULL;
	}

	if (k == 1) {
		delete head;
		return NULL;
	}

	Node* cur = head;

	for (int i = 0; i < k - 2; i++) {
		cur = cur->next;
	}

	Node* temp = cur->next;
	cur->next = temp->next;

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