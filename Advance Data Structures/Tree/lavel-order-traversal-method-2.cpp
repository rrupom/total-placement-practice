/*
	Problem : Given a binary tree. Traverse tree  lavel by lavel
	Solution Approach:
		- Push root node in the queue
		- then iterate over the tree.
			- for every iteration first initialize the count = size
			- then iterate over second for loop as count times
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

	void lavelOrderTraversal() {
		traversalHelper(root);
	}

	void traversalHelper(Node* root) {
		if (root == NULL) return;

		queue<Node*> q;
		q.push(root);

		while (!q.empty()) {
			int count = q.size(); // number of current nodes

			for (int i = 0; i < count; i++) {
				Node* cur = q.front();
				q.pop();

				cout << cur->key << " ";

				if (cur->left != NULL) q.push(cur->left);
				if (cur->right != NULL) q.push(cur->right);
			}

			cout << "\n";
		}
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

	int n; // how many data
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		t.insert(x);
	}

	t.lavelOrderTraversal();


	return 0;
}

/*
Complexity:

for every node once entering the queue and once deleting from the queue.
So for every node there is constant amount of time. So for n node, there is O(n) complexity

Auxiliary Space: O(n)
*/

/*
input:
7
6 3 1 4 9 7 10
*/

/*
output:
6
3 9
1 4 7 10

*/