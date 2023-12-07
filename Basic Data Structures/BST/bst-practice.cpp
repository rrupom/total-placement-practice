#include<bits/stdc++.h>
using namespace std;

class BST {
	struct Node {
		int key;
		Node* left;
		Node* right;
		Node(int val) {
			key = val;
			left = NULL;
			right = NULL;
		}
	};

	Node* root;
	vector<int> nodes;

	Node* insertValue(Node* root, int val) {
		if (root == NULL) return new Node(val);
		if (root->key < val) {
			root->right = insertValue(root->right, val);
		}
		else if (root->key > val) {
			root->left = insertValue(root->left, val);
		}
		return root;
	}

	void preorder(Node* root) {
		if (root != NULL) {
			nodes.push_back(root->key);
			preorder(root->left);
			preorder(root->right);
		}
	}

public:
	int canRepresent(int arr[], int N) {
		Node* root = NULL;

		for (int i = 0; i < N; i++) {
			root = insertValue(root, arr[i]);
		}

		preorder(root);

		for (int i = 0; i < nodes.size(); i++) {
			cout << nodes[i] << " ";
		}
		cout << endl;
		nodes.clear();

		return 0;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	BST bst;
	bst.canRepresent(arr, n);

	return 0;
}