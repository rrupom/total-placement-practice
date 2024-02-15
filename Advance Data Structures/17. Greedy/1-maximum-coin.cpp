/*
	Problem : Consider infinite supply of the following value coins
	10 5 2 1
	If anyone asks for an amount, how will you give this amount using minimum coins?
	Amount : 52
	Take 5 coins of 10 tk
	Take 1 coin of 2 tak
*/

#include<bits/stdc++.h>
using namespace std;

int minCoins(vector<int> coins, int payment) {
	int count = 0;

	for (int i = 0; i < coins.size(); i++) {
		int c = floor(payment / coins[i]);
		count += c;
		payment -= coins[i] * c;
	}

	return count;
}

void takeVectorInput(vector<int> &a) {
	int n, x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
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

	vector<int> coins;
	takeVectorInput(coins);

	sort(coins.begin(), coins.end(), greater<int>());

	int payment;
	cin >> payment;

	cout << "Minimum Coins need = " << minCoins(coins, payment) << endl;

	return 0;
}