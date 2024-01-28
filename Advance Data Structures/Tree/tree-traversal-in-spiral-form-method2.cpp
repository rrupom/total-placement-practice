/*
optimized algorithm:
	1. Push root to the stack s1
	2. While any of the two stacks is not empty
		1.1 while s1 is not empty
			a. take out a node and print it
			b. push childrens of the taken out node in s2 stack
		1.2 while s2 is not empty
			a. take out a node and print it
			b. push childrens of the taken out node in s1 in reverse order
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

	void traverseSpiral() {
		traverseSpiralHelper(root);
	}

	void traverseSpiralHelper(Node* root) {
		stack<Node*> s1;
		stack<Node*> s2;

		s1.push(root);

		while (!s1.empty() or !s2.empty()) {
			while (!s1.empty()) {
				Node* cur = s1.top();
				s1.pop();

				cout << cur->key << " ";

				if (cur->left != NULL) {
					s2.push(cur->left);
				}
				if (cur->right != NULL) {
					s2.push(cur->right);
				}
			}

			cout << endl;

			while (!s2.empty()) {
				Node* cur = s2.top();
				s2.pop();

				cout << cur->key << " ";

				// pushing s1 in reverse order

				if (cur->right != NULL) {
					s1.push(cur->right);
				}

				if (cur->left != NULL) {
					s1.push(cur->left);
				}
			}

			cout << endl;
		}
	}

	void insert(int data) {
		root = insertHelper(root, data);
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
Time Complexity: O(n)
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