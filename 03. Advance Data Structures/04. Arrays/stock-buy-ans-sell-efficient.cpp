#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int n) {
	int profit = 0;

	for (int i = 1; i < n; i++) {
		if (price[i] > price[i - 1]) {
			profit += (price[i] - price[i - 1]);
		}
	}

	return profit;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int price[n];

	for (int i = 0; i < n; i++) {
		cin >> price[i];
	}

	int ans = maxProfit(price, n);

	cout << ans << endl;

	return 0;
}