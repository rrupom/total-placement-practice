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
	int res, dist;

public:
	Tree() {
		root = NULL;
		res = 0;
		dist = -1;
	}

	void burnATree(int leaf) {
		int time = burnATreeHelper(root, leaf, dist);

		cout << "Time required to burn the tree from leaf node " << leaf << " is " << time << endl;
	}

	int burnATreeHelper(Node* root, int leaf, int &dist) {
		if (root == NULL) {
			return 0;
		}

		if (root->key == leaf) {
			dist = 0;
			return -1;
		}

		int ldist = -1;
		int rdist = -1;

		int lh = burnATreeHelper(root->left, leaf, ldist);
		int rh = burnATreeHelper(root->right, leaf, rdist);

		if (ldist != -1) {
			dist = ldist + 1;
			res = max(res, dist + rh);
		} else if (rdist != -1) {
			dist = rdist + 1;
			res = max(res, dist + lh);
		}

		return max(lh, rh) + 1;
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

	t.burnATree(4);

	return 0;
}