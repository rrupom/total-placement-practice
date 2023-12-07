#include<bits/stdc++.h>
using namespace std;

class BST {
	struct Node {
		int key;
		Node *left;
		Node *right;

		Node(int x) {
			key = x;
			left = NULL;
			right = NULL;
		}
	};

	Node *root;

	Node* makeEmpty(Node* root) {
		if (root == NULL) return NULL;
		makeEmpty(root->left);
		makeEmpty(root->right);

		delete root;

		return NULL;
	}

	Node* insertNode(Node* root, int x) {
		if (root == NULL) {
			return new Node(x);
		}

		if (root->key > x) {
			root->left = insertNode(root->left, x);
		} else if (root->key < x) {
			root->right = insertNode(root->right, x);
		}

		return root;
	}

	Node* deleteNode(Node* root, int x) {
		if (root == NULL) return root;
		if (root->key > x) {
			root->left = deleteNode(root->left, x);
		} else if (root->key < x) {
			root->right = deleteNode(root->right, x);
		} else {
			// this element need to be delete

			if (root->left == NULL) {
				Node* temp = root->right;
				delete root;
				return temp;
			} else if (root->right == NULL) {
				Node* temp = root->left;
				delete root;
				return temp;
			} else {
				Node* successor = getSuccessor(root);
				root->key = successor->key;
				root->right = deleteNode(root->right, successor->key);
			}
		}
	}

	Node* getSuccessor(Node* cur) {
		cur = cur->right;
		while (cur != NULL and cur->left != NULL) {
			cur = cur->left;
		}

		return cur;
	}

	void inorderTraversal(Node* root) {
		if (root != NULL) {
			inorderTraversal(root->left);
			cout << root->key << " ";
			inorderTraversal(root->right);
		}

		else return;
	}

	bool searchNode(Node* root, int val) {
		if (root == NULL ) {
			return false;
		}

		if (root->key == val) {
			return true;
		}
		else if (root->key > val) {
			return searchNode(root->left, val);
		} else if (root->key < val) {
			return searchNode(root->right, val);
		}

	}

public:
	BST() {
		root = NULL;
	}

	~BST() {
		root = makeEmpty(root);
	}

	void insert(int x) {
		root = insertNode(root, x);
	}

	void remove(int x) {
		root = deleteNode(root, x);
	}

	void printBST() {
		inorderTraversal(root);
		cout << endl;
	}

	void search(int val) {
		Node* curr = root;
		bool ans  = searchNode(curr, val);
		if (curr) {
			cout << "Element found\n";
		} else {
			cout << "Element Not Found\n";
		}
	}

	void labelOrderTraversal(Node* root) {
		if (root == NULL) {
			return;
		}

		queue<Node*> q;

		q.push(root->key);

		while (!q.empty()) {
			Node *node = q.front();
			cout << node->key;
			q.pop();

			if (node->left != NULL) {
				q.push(node->left)
			}
			if (node->right != NULL) {
				q.push(node->right)
			}
		}
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	BST bst;

	cout << "How many number in the array : " << endl;
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < n; i++) {
		bst.insert(arr[i]);
	}

	bst.printBST();
	bst.search(300);
	bst.insert(3);
	bst.printBST();

	return 0;
}