/*
	Problem : Serialize and Deserialize a binary tree.
	Serialize means converting binary tree into string or array
	Deserialize means converting back string or array to binary tree

	Applications of serialization and deserialization:
	1. If we need to sent a graph structure through the network then we need serialization
	and working on the graph on the other machine needs deserialization
	2. Another application of serialization and deserialzation is writing test case for various competitive
	program problem and evaluating their solution.
*/

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

class Tree {
	Node* root;
	int empty;
	vector<int> nodes;
	int index;

public:
	Tree() {
		root = NULL;
		empty = -1;
		index = 0;
	}

	void serialize() {
		serializeHelper(root, nodes);

		cout << "Printing the serialized nodes" << endl;

		for (int i = 0; i < nodes.size(); i++) {
			cout << nodes[i] << " ";
		}
		cout << endl;
	}

	void serializeHelper(Node* root, vector<int> &nodes) {
		if (root == NULL) {
			nodes.push_back(empty); // always prefer variable rather
			// than hard coded values
			return;
		}

		nodes.push_back(root->key);
		serializeHelper(root->left, nodes);
		serializeHelper(root->right, nodes);
	}

	void deserialize() {
		Node* newRoot = deserializeHelper(nodes);
		cout << "Root node after deserialize : " << newRoot->key << endl;
		cout << "Inorder traversal of deserialized root " << endl;
		inorderHelper(newRoot);
	}

	Node* deserializeHelper(vector<int> &nodes) {
		// when we reach the last node
		if (nodes.size() == index) return NULL;

		int val = nodes[index++];

		if (val == empty) {
			// this reference will be null
			return NULL;
		}

		Node* root = new Node(val);
		root->left = deserializeHelper(nodes);
		root->right = deserializeHelper(nodes);

		return root;

	}

	void insert(int data) {
		root = insertHelper(root, data);
	}

	void inorder() {
		inorderHelper(root);
	}

	void inorderHelper(Node* root) {
		if (root == NULL) {
			return;
		}

		inorderHelper(root->left);
		if (root->key != 0) {
			cout << root->key << " ";
		}
		inorderHelper(root->right);
	}

	Node* insertHelper(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}

		queue<Node*> q;
		q.push(root);

		while (!q.empty()) {
			Node* cur = q.front();

			q.pop();

			if (cur->left == NULL) {
				cur->left = new Node(data);
				break;
			} else {
				q.push(cur->left);
			}

			if (cur->right == NULL) {
				cur->right = new Node(data);
				break;
			} else {
				q.push(cur->right);
			}
		}

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

	// t.inorder();
	t.serialize();
	t.deserialize();


	return 0;
}