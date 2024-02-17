#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	Node* next[26];
	bool endmark;
	Node() {
		endmark = false;
		for (int i = 0; i < 26; i++) {
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

	void insert(string str) {
		insertHelper(root, str);
	}

	void search(string str) {
		bool flag = searchHelper(root, str);
		if (flag) {
			cout << "Word is present in the dictionary\n";
		} else {
			cout << "Not present in the dictionary\n";
		}
	}

	void deleteWord(string str) {
		deleteWordHelper(root, str, 0);
	}

	void deleteWordHelper(Node* root, string str, int depth) {
		if (depth == str.length()) {
			if (root->endmark) {
				// reached the end of the word. mark endmark as false
				root->endmark = false;
			}

			return;
		}

		int id = str[depth] - 'a';
		if (!root->next[id]) {
			// word not found in the trie
			return;
		}

		// word is present in the dictionary. so recursively delete the word
		deleteWordHelper(root->next[id], str, depth + 1);

		// after the recursive call, check if the child node can be deleted
		if (root->next[id]->endmark == false) {
			// it is not the end of any other word
			delete root->next[id];
			root->next[id] = NULL;
		}
	}


	bool searchHelper(Node* root, string str) {
		for (int i = 0; i < str.length(); i++) {
			int id = str[i] - 'a';
			if (root->next[id] == NULL) {
				return false;
			}

			root = root->next[id];
		}

		return root->endmark;
	}

	void insertHelper(Node* root, string str) {
		for (int i = 0; i < str.length(); i++) {
			int id = str[i] - 'a';
			if (root->next[id] == NULL) {
				// it checks if there is any other connected using this node. If not then create a new connection
				root->next[id] = new Node();
			}

			root = root->next[id];
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

	Trie t;

	int n;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		t.insert(str);
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> str;
		t.search(str);
	}

	t.deleteWord("emon");

	t.search("emon");

	return 0;
}

/*
input:
3
rakib
emon
shawn
2
raki
rakib
*/

/*
output:
Not present in the dictionary
Word is present in the dictionary
Not present in the dictionary
*/