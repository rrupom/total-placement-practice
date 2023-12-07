#include<bits/stdc++.h>
using namespace std;

class BST {
	struct Node {
		int data;
		Node* left;
		Node* right;
		Node(int val) {
			data = val;
			left = NULL;
			right = NULL;
		}
	};

	Node* root;

	Node* insertValue(Node* root, int value) {
		if (root == NULL) {
			return new Node(value);
		}
		else if (root->data < value) {
			root->right = insertValue(root->right, value);
		} else if (root->data > value) {
			root->left = insertValue(root->left, value);
		}

		return root;
	}

	Node* getLCA(Node* root, int x, int y) {
		if (root == NULL) return NULL;
		if (root->data > x and root->data > y) {
			return getLCA(root->left, x, y);
		} else if (root->data < x and root->data < y) {
			return getLCA(root->right, x, y);
		} else {
			return root;
		}
	}

public:
	BST() {
		root = NULL;
	}

	void insert(int x) {
		root = insertValue(root, x);
	}

	void lca(int x, int y) {
		Node* node = getLCA(root, x, y);
		if (node != NULL) {
			cout << "LCA of " << x << " and " << y << " is : " << node->data << endl;
		} else {
			cout << "NO LCA found\n";
		}
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	BST bst;

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		bst.insert(arr[i]);
	}

	cout << "How many times do you wan to find LCA : " << endl;
	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		bst.lca(x, y);
	}

	return 0;
}