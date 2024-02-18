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

	void printLeftViewIterative() {
		printLeftViewIterativeHelper(root);
	}

	void printLeftViewIterativeHelper(Node* root) {
		// this function will work same as line by line traversal
		// just we will print the nodes when the first node comes

		if (root == NULL) return;

		queue<Node*> q;
		q.push(root);

		while (!q.empty()) {

			int count = q.size();

			for (int i = 0; i < count; i++) {
				Node* cur = q.front();
				q.pop();

				if (i == 0) {
					cout << cur->key << " ";
				}

				if (cur->left != NULL) {
					q.push(cur->left);
				} if (cur->right != NULL) {
					q.push(cur->right);
				}
			}
		}
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

	t.printLeftViewIterative();

	return 0;
}

/*
Time Complexity: O(n) [n => number of nodes]
Space Complexity: O(h) [h => height of binary tree]
*/

/*
input:
7
6 3 1 4 9 7 10
*/

/*
output:
6 3 1
*/
