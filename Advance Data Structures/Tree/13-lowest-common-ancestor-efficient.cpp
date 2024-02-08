#include<bits/stdc++.h>
using namespace std;

class Node {

public:

	int key;
	Node* left;
	Node* right;
	Node(int data) {
		this->key = data;
		left = right = NULL;
	}
};

class Tree {
	Node* root;

public:
	Tree() {
		root = NULL;
	}

	void LCA(int n1, int n2) {
		Node* lca = findLCAEfficient(root, n1, n2);

		cout << "LCA node value is : " << lca->key << endl;
	}

	Node* findLCAEfficient(Node* root, int n1, int n2) {
		if (root == NULL) return NULL;

		if (root->key == n1 or root->key == n2 ) {
			return root;
		}

		Node* lca1 = findLCAEfficient(root->left, n1, n2);
		Node* lca2 = findLCAEfficient(root->right, n1, n2);

		// One node is present in left subtree and other is present in the right subtree
		if (lca1 != NULL and lca2 != NULL) {
			return root;
		}

		// left subtree contains both node
		if (lca1 != NULL) return lca1;

		// right subtree container both node
		return lca2;
	}

	void insert(int data) {
		root = insertHelper(root, data);
	}

	Node* insertHelper(Node* root, int data) {
		if (root == NULL) return new Node(data);
		if (data <= root->key) root->left = insertHelper(root->left, data);
		else root->right = insertHelper(root->right, data);

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

	t.LCA(2, 5);

	return 0;
}

/*
Time Complexity: theta(n) // as one traversal of every node
Space Complexity: O(h) // h->height of the binary tree
*/

/*
input:
7
7 4 12 2 5 10 14
*/

/*
output:
LCA node value is : 4
*/