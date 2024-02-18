/*
	Problem : Check every node's value is sum of it's children
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

	bool isChildrenSum() {
		return isChildrenSumHelper(root);
	}

	bool isChildrenSumHelper(Node* root) {
		if (root == NULL) return true;
		if (root->left == NULL and root->right == NULL) return true;

		int sum = 0;
		if (root->left != NULL) {
			sum += root->left->key;
		}
		if (root->right != NULL) {
			sum += root->right->key;
		}

		return (root->key == sum and
		        isChildrenSumHelper(root->left) and
		        isChildrenSumHelper(root->right));
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

	if (t.isChildrenSum()) {
		cout << "True\n";
	} else {
		cout << "False\n";
	}

	return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(h)
*/

/*
input:
5
20 8 12 3 5
*/

/*
output:
True
*/