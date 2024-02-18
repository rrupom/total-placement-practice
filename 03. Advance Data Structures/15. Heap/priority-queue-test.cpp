#include<bits/stdc++.h>
using namespace std;

class Brain {
public:
	char ch;
	int freq;
	Brain(char ch, int freq) {
		this->ch = ch;
		this->freq = freq;
	}
};

class MyCMP {
public:
	bool operator()(const Brain &a, const Brain &b) {
		if (a.freq == b.freq) {
			return a.ch < b.ch;
		}

		return a.freq < b.freq;
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

	priority_queue<Brain, vector<Brain>, MyCMP> pq;
	pq.push(Brain('C', 3));
	pq.push(Brain('B', 3));
	pq.push(Brain('A', 4));

	cout << pq.top().ch << endl;
	pq.pop();
	cout << pq.top().ch << endl;

	return 0;
}