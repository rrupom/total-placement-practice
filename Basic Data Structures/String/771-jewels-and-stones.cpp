#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int numJewelsInStones(string jewels, string stones) {
		int freq[256];
		fill(freq, freq + 256, 0);
		for (int i = 0; i < jewels.size(); i++) {
			freq[jewels[i]]++;
		}

		int total = 0;

		for (int i = 0; i < stones.size(); i++) {
			if (freq[stones[i]] > 0) total++;
		}

		return total;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string jewels, stones;
	cin >> jewels >> stones;

	Solution sol;
	cout << sol.numJewelsInStones(jewels, stones);

	return 0;
}