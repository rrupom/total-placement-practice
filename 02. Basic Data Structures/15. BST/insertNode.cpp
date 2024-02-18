#include<bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node* left;
	Node* right;
};

Node* newNode(int item) {
	Node* temp = new Node();
	temp->key = item;
	temp->left = NULL;
	temp->right = NULL;
}

Node* insert(Node* root, int key) {
	if (root == NULL) {
		return newNode(key);
	}

	if (root->key > key) {
		root->left = insert(root->left, key);
	} else if (root->key < key) {
		root->right = insert(root->right, key);
	}

	return root;
}

void inorder(Node* root) {
	if (root != NULL) {
		inorder(root->left);
		cout << root->key << " ";
		inorder(root->right);
	}
}

void preorder(Node* root) {
	if (root != NULL) {
		cout << root->key << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(Node* root) {
	if (root != NULL) {
		postorder(root->left);
		postorder(root->right);
		cout << root->key << " ";
	}
}

int height(Node* root) {
	if (root == NULL) {
		return 0;
	} else {
		int leftDepth = height(root->left);
		int rightDepth = height(root->right);

		if (leftDepth > rightDepth) {
			return (leftDepth + 1);
		} else {
			return (rightDepth + 1);
		}
	}
}

void printGivenLevel(Node* root, int level) {
	if (root == NULL) {
		return;
	}
	if (level == 1) {
		cout << root->key << " ";
	} else {
		printGivenLevel(root->left, level - 1);
		printGivenLevel(root->right, level - 1);
	}
}

void printGivenLevel2(Node* root, int level) {
	if (root == NULL) return;
	if (level == 1) {
		cout << root->key << " ";
	} else if (level > 1) {
		printGivenLevel2(root->left, level - 1);
		printGivenLevel2(root->right, level - 1);
	}
}

void printLevelOrder(Node* root) {
	int h = height(root);
	int i;

	for (i = 1; i <= h; i++) {
		printGivenLevel(root, i);
		cout << "\n";
	}
}

void printLeafNodes(Node* root) {
	if (root == NULL) {
		return;
	}
	if (root->left == NULL and root->right == NULL) {
		cout << root->key << " ";
	}
	if (root->left) {
		printLeafNodes(root->left);
	} if (root->right) {
		printLeafNodes(root->right);
	}
}

void printNonLeafNodes(Node* root) {
	if (root == NULL or (root->left == NULL and root->right == NULL)) {
		return;
	}
	if (root->left != NULL or root->right != NULL) {
		cout << root->key << " ";
	}
	if (root->left) {
		printNonLeafNodes(root->left);
	}
	if (root->right) {
		printNonLeafNodes(root->right);
	}
}

int totalNodes(Node* root) {
	if (root == NULL) {
		return 0;
	}

	else return totalNodes(root->left) + totalNodes(root->right) + 1;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Node* root = NULL;

	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
	postorder(root);
	cout << endl;

	printLevelOrder(root);
	printGivenLevel2(root, 3);
	cout << endl;

	cout << "All Leaf Nodes : " << endl;
	printLeafNodes(root);
	cout << endl;

	cout << "All Non Leaf Nodes : " << endl;
	printNonLeafNodes(root);
	cout << endl;

	cout << "Total number of Nodes : " << endl;
	cout << totalNodes(root);
	cout << endl;

	return 0;
}