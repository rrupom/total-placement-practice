#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

Node* addToEmpty(Node* last, int data) {
	if (last != NULL) {
		return last;
	}

	Node *temp = new Node(data);
	last = temp;
	temp->next = last;

	return last;
}

Node* addBegin(Node* last, int data) {
	if (last == NULL) {
		return addToEmpty(last, data);
	}

	Node* temp = new Node(data);
	temp->next = last->next;
	last->next = temp;

	return last;
}

Node* addEnd(Node* last, int data) {
	if (last == NULL) {
		return addToEmpty(last, data);
	}
	Node* temp = new Node(data);
	temp->next = last->next;
	last->next = temp;
	last = temp;

	return last;
}

Node* addAfter(Node* last, int data, int item) {
	if (last == NULL) return NULL;
	Node *temp, *p;
	p = last->next;

	do {
		if (p->data == item) {
			temp = new Node(data);
			temp->next = p->next;
			p->next = temp;
			if (p == last) {
				last = temp;
			}

			return last;
		} else {
			p = p->next;
		}
	} while (p != last->next);

	cout << item << " not present in the list." << endl;
	return last;
}

void traverse(Node* last) {
	if (last == NULL) {
		cout << "List is empty\n";
		return;
	}
	Node* p = last->next;
	do {
		cout << p->data << " ";
		p = p->next;
	} while (p != last->next);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Node *last = NULL;
	last = addToEmpty(last, 6);
	last = addBegin(last, 4);
	last = addBegin(last, 2);
	last = addEnd(last, 8);
	last = addEnd(last, 12);
	last = addAfter(last, 10, 8);

	// traverse
	traverse(last);

	return 0;
}