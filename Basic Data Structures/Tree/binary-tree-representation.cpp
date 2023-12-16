#include<bits/stdc++.h>
using namespace std;

class BinaryTree {
public:

	int key;
	BinaryTree* left;
	BinaryTree* right;
	BinaryTree(int data) {
		this->key = data;
		left = NULL;
		right = NULL;
	}
};

void printBinaryTree(BinaryTree* root) {
	if (root == NULL) {
		return;
	}

	printBinaryTree(root->left);
	cout << root->key << " ";
	printBinaryTree(root->right);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	BinaryTree* root = new BinaryTree(10);
	root->left = new BinaryTree(20);
	root->right = new BinaryTree(30);
	root->left->left = new BinaryTree(50);

	printBinaryTree(root);

	return 0;
}