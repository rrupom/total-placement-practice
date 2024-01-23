/*
	Problem : Print Left View of Binary Tree at every lebel
*/

#include<bits/stdc++.h>
using namespace std;

int maxLevelSeen = 0;

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

	void printLeftView() {
		// we will maintain two variable to print left view at every lebel
		// one is maxLebelSeen -> global variable
		// label -> local variable for function
		printLeftViewHelper(root, 1);
	}

	void printLeftViewHelper(Node* root, int label) {
		if (root == NULL) {
			return;
		}

		if (maxLevelSeen < label) {
			// current label is not visited yet.
			// so we will print the current node value and update maxLabelSeen variable

			cout << root->key << " ";
			maxLevelSeen = label;
		}

		printLeftViewHelper(root->left, label + 1);
		printLeftViewHelper(root->right, label + 1);
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

	t.printLeftView();

	return 0;
}

/*
TimeComplexity: O(n)  [n => number of nodes]
SpaceComplexity: O(h) [h => height of binary tree]
*/

/*
Time Complexity:
Space Complexity:
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