/*
	Problem : A tree is given. We need to traverse the tree in line line order
	Solution approach:
	 - first we need to push root node and null pointer into the queue
	 - then iterate over the queue
	 	- if it is the null pointer, that indicates that one level is completed
	 	- on other case we have to insert left and right child of the root
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

	void levelOrderTraversal() {
		traversalHelper(root);
	}

	void traversalHelper(Node* root) {
		if (root == NULL) return;

		queue<Node*> q;
		q.push(root);
		q.push(NULL);

		while (q.size() > 1) {
			Node* cur = q.front();
			q.pop();

			if (cur == NULL) {
				// termination of one level
				cout << endl;
				q.push(NULL);
				continue;
			}

			cout << cur->key << " ";

			if (cur->left != NULL) {
				q.push(cur->left);
			}
			if (cur->right != NULL) {
				q.push(cur->right);
			}
		}
	}

	Node* insertHelper(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}

		if (data <= root->key) {
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

	int n; // how many data
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		t.insert(x);
	}

	t.levelOrderTraversal();

	return 0;
}

/*
input:
7
6 3 1 4 9 7 10
*/

/*
output:
6
3 9
1 4 7 10
*/