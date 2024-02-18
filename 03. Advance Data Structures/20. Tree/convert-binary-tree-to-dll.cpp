/*
	Problem : A binary tree is given. Convert it to doubly linked list
*/

#include<bits/stdc++.h>
using namespace std;

class Node {

public:
	int data;
	Node* left;
	Node* right;
	Node(int data) {
		this->data = data;
		left = right = NULL;
	}
};

class Tree {
	Node* root;
	Node* head;
	Node* prev;

public:

	Tree() {
		root = head = prev = NULL;
	}

	void insert(int data) {
		root = insertHelper(root, data);
	}

	void convertToDLL() {
		head = convertToDLLHelper(root);
	}

	void traverseDLL() {
		traverseDLLHelper(head);
	}

	void traverseDLLHelper(Node* head) {
		if (head == NULL) {
			return;
		}

		Node* cur = head;

		while (cur != NULL) {
			cout << cur->data << " ";
			cur = cur->right;
		}
	}

	Node* convertToDLLHelper(Node* root) {
		if (root == NULL) return NULL;

		// head will always be the leftmost child
		Node* head = convertToDLLHelper(root->left);
		if (prev == NULL) {
			// this is the head
			head = root;
		} else {
			// these are the intermediary nodes
			root->left = prev;
			prev->right = root;
		}

		// updating the prev node
		prev = root;

		// calling for right child

		convertToDLLHelper(root->right);

		return head;
	}

	Node* insertHelper(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}

		if (data <= root->data) {
			root->left = insertHelper(root->left, data);
		} else {
			root->right = insertHelper(root->right, data);
		}

		return root;
	}
};

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Tree t;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		t.insert(x);
	}

	t.convertToDLL();
	t.traverseDLL();

	return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(h)
*/

/*
input:
9
6 3 9 1 4 7 10 12 15
*/

/*
output:
1 3 4 6 7 9 10 12 15
*/