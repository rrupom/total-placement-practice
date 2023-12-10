#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int mostWordsFound(vector<string>& sentences) {
		int total = INT_MIN;

		for (int i = 0; i < sentences.size(); i++) {
			vector<string> result = splitBySpace(sentences[i]);
			total = max(total, (int)result.size());
		}

		return total;
	}
private:
	vector<string> splitBySpace(string &sentence) {
		vector<string> tokens;
		istringstream tokenStream(sentence);
		string token;
		while (tokenStream >> token) {
			tokens.push_back(token);
		}

		return tokens;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; cin >> n;
	cin.ignore();
	vector<string> sentences;
	for (int i = 0; i < n; i++) {
		string sentence;
		getline(cin, sentence);
		sentences.push_back(sentence);
	}

	Solution sol;
	cout << sol.mostWordsFound(sentences) << endl;

	return 0;
}