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

void searchKeyInLinkedList(Node *head, int key) {
	bool flag = false;
	while (head != NULL) {
		if (head->data == key) {
			cout << "Key is found\n";
			flag = true;
			break;
		}
		head = head->next;
	}

	if (!flag) cout << "Not found\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Node *head = new Node(10);
	Node *temp = new Node(20);
	Node *temp2 = new Node(30);

	head ->next = temp;
	temp->next = temp2;

	int key;
	cin >> key;

	searchKeyInLinkedList(head, key);

	return 0;
}