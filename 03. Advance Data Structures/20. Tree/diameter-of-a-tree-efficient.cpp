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
	int res;

public:
	Tree() {
		root = NULL;
		res = 0;
	}

	void insert(int data) {
		root = insertHelper(root, data);
	}

	void diameter() {
		/*
			this function return the height of the binary tree
			but update the res variable with diameter value
		*/
		int d = diameterHelper(root);

		cout << res << endl;
	}

	int diameterHelper(Node* root) {
		if (root == NULL) return 0;
		int lh = diameterHelper(root->left);
		int rh = diameterHelper(root->right);

		res = max(res, 1 + lh + rh);

		return 1 + max(lh, rh);

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

	t.diameter();

	return 0;
}

/*
input:
7
7 4 12 2 5 10 14
*/

/*
output:
5
*/