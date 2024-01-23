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

	int maxWidthOfBST() {
		return maxWidthOfBSTHelper(root);
	}

	int maxWidthOfBSTHelper(Node* root) {
		if (root == NULL) {
			return 0;
		}

		int mx = INT_MIN;

		queue<Node*> q;
		q.push(root);

		while (!q.empty()) {
			int count = q.size(); // number of nodes at current level
			mx = max(count, mx);

			for (int i = 0; i < count; i++) {
				Node* cur = q.front();
				q.pop();

				if (cur->left != NULL) {
					q.push(cur->left);
				}
				if (cur->right != NULL) {
					q.push(cur->right);
				}
			}
		}

		return mx;

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

	cout << t.maxWidthOfBST() << endl;

	return 0;
}

/*
input:
9
6 3 9 1 4 7 10 12 15
*/

/*
output:
4
*/