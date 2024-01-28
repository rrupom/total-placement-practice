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

	void diameterNaive() {
		int ans = diameterHelper(root);

		cout << ans << endl;
	}

	int diameterHelper(Node* root) {
		if (root == NULL) return 0;

		int d1 = 1 + height(root->left) + height(root->left);
		int d2 = diameterHelper(root->left);
		int d3 = diameterHelper(root->right);

		return max(d1, max(d2, d2));
	}

	int height(Node* root) {
		if (root == NULL) return 0;
		return 1 + max(height(root->left), height(root->right));
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

	t.diameterNaive();

	return 0;
}

/*
Time Complexity: O(n*2) : when tree is skewed
Space Complexity:
*/

/*
input:
7
7 4 12 2 5 10 14
*/

/*
output:
5
*/