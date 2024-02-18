/*
	Problem : a binary matrix is given. cnt distinct rows in a binary matrix
	I/P:
	1 0 0
	1 1 1
	1 0 0
	1 1 1

	O/P: 2
*/

#include<bits/stdc++.h>
using namespace std;

#define sz 100

int matrix[sz][sz];
int cnt;
bool flag;

class Node {
public:
	Node* next[2];
	bool endmark;
	Node() {
		endmark = false;
		for (int i = 0; i < 2; i++) {
			next[i] = NULL;
		}
	}
};

class Trie {
	Node* root;

public:
	Trie() {
		root = new Node();
	}

	void insert(vector<int> row) {
		insertHelper(root, row);
	}

	void insertHelper(Node* root, vector<int> row) {
		flag = false;
		for (int i = 0; i < row.size(); i++) {
			if (!root->next[row[i]]) {
				if (!flag) {
					++cnt;
					flag = true;
				}

				root->next[row[i]] = new Node();
			}
			root = root->next[row[i]];
		}

		root->endmark = true;
	}
};



int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("E:/Codes/input.txt", "r", stdin);
	freopen("E:/Codes/output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int row, col;
	cin >> row >> col;

	// vector<vector<int>> v;

	Trie t;

	for (int i = 0; i < row; i++) {
		vector<int> r;
		int x;
		for (int j = 0; j < col; j++) {
			cin >> x;
			r.push_back(x);
		}

		t.insert(r);
	}

	cout << "Total number of unique rows = " << cnt << endl;


	return 0;
}

/*
Time Complexity:
m : rows
n : columns
total time complexity : O(m*n)
Space Complexity: O(m*n)
*/

/*
input:
4 4
1 1 0 0
1 1 0 0
1 1 0 0
1 1 0 0
*/

/*
output:
1
*/