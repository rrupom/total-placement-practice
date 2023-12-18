#include<bits/stdc++.h>
using namespace std;

class Node {
public:

	int key;
	Node* left;
	Node* right;
	Node(int data) {
		this->key = data;
		left = NULL;
		right = NULL;
	}
};

class BinaryTree {
	Node* root;

public:
	BinaryTree() {
		root = NULL;
	}

	void insert(int data) {
		root = insertIntoBT(root, data);
	}

	void iterativeInorder() {
		iterativeInorderHelper(root);
	}

	// iterative inorder helper
	void iterativeInorderHelper(Node* root) {
		stack<Node*> st;
		Node* cur = root;

		while (cur != NULL or !st.empty()) {
			while (cur != NULL) {
				st.push(cur);
				cur = cur->left;
			}

			cur = st.top();
			st.pop();

			cout << cur->key << " ";
			cur = cur->right;
		}
	}

	// insertion helper for insertion
	Node* insertIntoBT(Node* root, int data) {
		if (root == NULL) {
			// so the it is the first element to be inserted in the BT
			// only in this case root will be change
			return new Node(data);
		}

		// already element is present in the BT

		if (data <= root->key) {
			// if data is smaller than the key
			root->left = insertIntoBT(root->left, data);
		} else {
			// so data need to linked to the right subtree
			root->right = insertIntoBT(root->right, data);
		}

		return root;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	BinaryTree bt;
	bt.insert(10);
	bt.insert(3);
	bt.insert(20);
	bt.insert(1);
	bt.insert(5);
	bt.insert(9);
	bt.iterativeInorder();

	// cout << bt.getHeight();

	return 0;
}