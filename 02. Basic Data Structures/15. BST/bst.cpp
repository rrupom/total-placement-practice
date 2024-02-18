#include<bits/stdc++.h>
using namespace std;


struct Node {
	int key;
	Node *left, *right;
	Node(int val) {
		key = val;
		left = nullptr;
		right = nullptr;
	}
};


Node* insertNode(Node* root, int val) {
	if (root == nullptr) {
		return new Node(val);
	}

	if (root->key < val) {
		root->right = insertNode(root->right, val);
	} else if (root->key > val) {
		root->left = insertNode(root->left, val);
	} else return root;

	// val is already existing in the bst
}

void inorderTraversal(Node* root) {
	if (root != nullptr) {
		inorderTraversal(root->left);
		cout << root->key << " ";
		inorderTraversal(root->right);
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cout << "How many array elements : " << std::flush;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	Node *root = nullptr;


	for (int i = 0; i < n; i++) {
		root = insertNode(root, arr[i]);
	}

	cout << "Inorder traversal of the bst : " << endl;

	inorderTraversal(root);

	return 0;
}