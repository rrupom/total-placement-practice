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

class BinaryTree {
	Node* root;

public:
	BinaryTree() {
		root = NULL;
	}

	void insert(int data) {
		root = insertIntoBT(root, data);
	}

	void inorder() {
		inorderTraversal(root);
	}

	// insertion helper function
	Node* insertIntoBT(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}

		if (data <= root->key) {
			root->left = insertIntoBT(root->left, data);
		} else {
			root->right = insertIntoBT(root->right, data);
		}

		return root;
	}

	void inorderTraversal(Node* root) {
		if (root == NULL) return;

		inorderTraversal(root->left);
		cout << root->key << " ";
		inorderTraversal(root->right);
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

	BinaryTree bt;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		bt.insert(x);
	}

	bt.inorder();


	return 0;
}

/*
input:
7
6 3 1 4 9 7 10
*/

/*
output:
1 3 4 6 7 9 10
*/