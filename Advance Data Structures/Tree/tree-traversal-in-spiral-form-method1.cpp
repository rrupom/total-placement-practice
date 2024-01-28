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

	void traverseSpiral() {
		traverseSpiralHelper(root);
	}

	void traverseSpiralHelper(Node* root) {
		if (root == NULL) return;

		queue<Node*> q;
		stack<int> s;
		bool reverse = false;

		q.push(root);

		while (!q.empty()) {
			int count = q.size();

			for (int i = 0; i < count; i++) {
				Node* cur = q.front();
				q.pop();

				if (reverse) {
					s.push(cur->key);
				} else {
					cout << cur->key << " ";
				}

				if (cur->left != NULL) {
					q.push(cur->left);
				}
				if (cur->right != NULL) {
					q.push(cur->right);
				}
			}

			if (reverse) {
				while (!s.empty()) {
					cout << s.top() << " ";
					s.pop();
				}
			}

			reverse = !reverse;
			cout << endl;
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

	t.traverseSpiral();

	return 0;
}

/*
Time Complexity: Every node is push into the queue and pop from the queue exactly once. So O(n)
Space Complexity: O(h)
*/

/*
input:
7
7 4 12 2 5 10 14
*/

/*
output:
7
12 4
2 5 10 14
*/