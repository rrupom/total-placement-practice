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

	void findLCA(int n1, int n2) {
		Node* lca = findLCAHelper(root, n1, n2);

		if (lca != NULL) {
			cout << "LCA Node Value : " << lca->key << endl;
		} else {
			cout << "NO LCA found\n";
		}
	}

	Node* findLCAHelper(Node* root, int n1, int n2) {
		vector<Node*> path1, path2;

		if (!findPath(root, path1, n1) or !findPath(root, path2, n2)) {
			return NULL;
		}

		for (int i = 0; i < path1.size() - 1 and path2.size() - 1; i++ ) {
			if (path1[i + 1] != path2[i + 1] ) {
				return path1[i];
			}
		}

		return NULL;
	}

	bool findPath(Node* root, vector<Node*> &path, int n) {
		if (root == NULL) return false;

		path.push_back(root);

		if (root->key == n) return true;

		if (findPath(root->left, path, n) or findPath(root->right, path, n)) {
			return true;
		}

		path.pop_back();
		return false;
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

	t.findLCA(2, 5);

	return 0;
}

/*
Time Complexity: theta(n) + theta(n)
Space Complexity: O(n)
*/

/*
input:
7
7 4 12 2 5 10 14
*/

/*
output:
LCA Node Value : 4
*/