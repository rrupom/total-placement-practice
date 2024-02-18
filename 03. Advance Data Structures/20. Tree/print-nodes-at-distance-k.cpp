/*
	Problem : A Binary Tree given and distance k is given. Print every node
	at distance k
*/

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

	void printAtDistance(int k) {
		printHelper(root, k);
	}

	Node* insertHelper(Node* root, int data) {
		if (root == NULL) return new Node(data);
		if (data <= root->key) root->left = insertHelper(root->left, data);
		else root->right = insertHelper(root->right, data);

		return root;
	}

	void printHelper(Node* root, int k) {
		if (root == NULL) return;

		if (k == 0) {
			cout << root->key << " ";
			return;
		} else {
			printHelper(root->left, k - 1);
			printHelper(root->right, k - 1);
		}
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

	int n; // how many data
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		t.insert(x);
	}

	int k;
	cin >> k;

	t.printAtDistance(k);

	return 0;
}