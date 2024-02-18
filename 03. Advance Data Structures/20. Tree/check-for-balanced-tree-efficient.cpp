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

	int isBalanced() {
		return isBalancedHelper(root);
	}

	int isBalancedHelper(Node* root) {
		if (root == NULL) {
			return 0;
		}

		int lh = isBalancedHelper(root->left);
		if (lh == -1) return -1;

		int rh = isBalancedHelper(root->right);
		if (rh == -1) return -1;

		if (abs(lh - rh) > 1) return -1;
		else return max(lh, rh) + 1;
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

	if (t.isBalanced() != -1) {
		cout << "Balanced\n";
	} else {
		cout << "Not Balanced\n";
	}

	return 0;
}

/*
input:
Case 1:
9
6 3 9 1 4 7 10 12 15
*/

/*
output:
Case 1:
Not Balanced
*/