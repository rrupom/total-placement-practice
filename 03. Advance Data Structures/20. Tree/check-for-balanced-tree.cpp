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

	void insert(int data) {
		root = insertHelper(root, data);
	}

	int height() {
		return heightHelper(root);
	}

	bool isBalanced() {
		return balancedHelper(root);
	}

	bool balancedHelper(Node* root) {
		if (root == NULL) {
			return true;
		}

		int lh = heightHelper(root->left);
		int rh = heightHelper(root->right);


		return (abs(lh - rh) <= 1 and
		        balancedHelper(root->left) and
		        balancedHelper(root->right));
	}

	int heightHelper(Node* root) {
		if (root == NULL) {
			return 0;
		}

		int left = 1 + heightHelper(root->left);
		int right = 1 + heightHelper(root->right);

		return max(left, right);
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

	// cout << t.height() << endl;
	if (t.isBalanced()) {
		cout << "Balanced\n";
	} else {
		cout << "Not balanced\n";
	}

	return 0;
}

/*
input:
9
6 3 9 1 4 7 10 12 15
*/

/*
output:
Not balanced
*/