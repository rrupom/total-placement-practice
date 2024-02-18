#include<bits/stdc++.h>
using namespace std;

class Frame {

public:

	int value;
	int arrayPos;
	int valuePos;

	Frame(int value, int arrayPos, int valuePos) {
		this->value = value;
		this->arrayPos = arrayPos;
		this->valuePos = valuePos;
	}
};

class MyCMP {

public:

	bool operator()(const Frame &a, const Frame &b) {
		return a.value > b.value;
	}
};

vector<int> mergeKSortedArray(vector<vector<int>> &input, int k) {
	priority_queue<Frame, vector<Frame>, MyCMP> pq;

	for (int i = 0; i < input.size(); i++) {
		pq.push(Frame(input[i][0], i, 0));
	}

	vector<int> res;

	while (!pq.empty()) {
		Frame element = pq.top();
		res.push_back(element.value);
		pq.pop();

		// if next element present in the array then insert it
		int arrayPos = element.arrayPos;
		int valuePos = element.valuePos;

		if (valuePos + 1 < input[arrayPos].size()) {
			pq.push(Frame(input[arrayPos][valuePos + 1], arrayPos, valuePos + 1));
		}
	}

	return res;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("E:/Codes/input.txt", "r", stdin);
	freopen("E:/Codes/output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<int>> input;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		vector<int> v;
		int sz, x;
		cin >> sz;

		for (int j = 0; j < sz; j++) {
			cin >> x;
			v.push_back(x);
		}

		input.push_back(v);
	}

	int k;
	cin >> k;

	vector<int> sorted = mergeKSortedArray(input, k);

	for (int i = 0; i < sorted.size(); i++) {
		cout << sorted[i] << " ";
	}

	return 0;
}

/*
Time Complexity: O(nKlogk) (n*k elements and always heap holds maximum of k elements)
Space Complexity: O(k)
*/

/*
input:
3
3
10 20 30
2
5 15
4
1 9 11 18
2
*/

/*
output:
1 5 9 10 11 15 18 20 30
*/