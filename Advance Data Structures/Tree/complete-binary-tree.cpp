#include<bits/stdc++.h>
using namespace std;

class Node {

public:
	int key;
	Node* left;
	Node* right;
	Node(int data) {
		this->key = data;
		left = NULL;
		right = NULL;
	}
};

class Tree {
	Node* root;

public:
	Tree() {
		root = NULL;
	}

	void insert(int data) {
		root = insertHelper(root, data);
	}

	void inorder() {
		inorderHelper(root);
	}

	void inorderHelper(Node* root) {
		if (root == NULL) {
			return;
		}

		inorderHelper(root->left);
		if (root->key != 0) {
			cout << root->key << " ";
		}
		inorderHelper(root->right);
	}

	Node* insertHelper(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}

		queue<Node*> q;
		q.push(root);

		while (!q.empty()) {
			Node* cur = q.front();

			q.pop();

			if (cur->left == NULL) {
				cur->left = new Node(data);
				break;
			} else {
				q.push(cur->left);
			}

			if (cur->right == NULL) {
				cur->right = new Node(data);
				break;
			} else {
				q.push(cur->right);
			}
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

	t.inorder();

	return 0;
}