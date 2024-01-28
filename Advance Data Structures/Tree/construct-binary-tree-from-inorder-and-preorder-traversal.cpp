#include<bits/stdc++.h>
using namespace std;

class Node {

public:

	int key;
	Node* left;
	Node* right;
	Node(int data) {
		this->key = data;
	}
};

class Tree {
	Node* root;
	int prevInd;

public:
	Tree() {
		root = NULL;
		prevInd = 0;
	}

	void postOrderTraverse() {
		traverseHelper(root);
	}

	void traverseHelper(Node* root) {
		if (root == NULL) return;
		traverseHelper(root->left);
		traverseHelper(root->right);
		cout << root->key << " ";
	}

	void contructTree(vector<int> in, vector<int> pre, int is, int ie) {
		root = contructTreeHelper(in, pre, is, ie);
	}

	Node* contructTreeHelper(vector<int> in, vector<int> pre, int is, int ie) {
		if (is > ie) {
			return NULL;
		}

		Node* root = new Node(pre[prevInd++]);

		int ind;

		for (int i = is; i <= ie; i++) {
			if (in[i] == root->key) {
				ind = i;
				break;
			}
		}

		root->left = contructTreeHelper(in, pre, is, ind - 1);
		root->right = contructTreeHelper(in, pre, ind + 1, ie);

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
	cin.tie(NULL);
	cout.tie(NULL);

	Tree t;

	int n;
	cin >> n;

	vector<int> in(n);
	vector<int> pre(n);
	for (int i = 0; i < n; i++) {
		cin >> in[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> pre[i];
	}

	t.contructTree(in, pre, 0, n - 1);
	t.postOrderTraverse();

	return 0;
}