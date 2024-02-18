/*
	Problem : we can buy the stack but can not sell the stock on the same day. now write a
	program to maximize the profit
*/

#include<bits/stdc++.h>
using namespace std;

int maxProfitNaive(int arr[], int start, int end) {
	if (end <= start) {
		return 0;
	}

	int profit = 0;

	for (int i = start; i < end; i++) {
		for (int j = i + 1; j <= end; j++) {
			if (arr[j] > arr[i]) {
				int cur_profit = arr[j] - arr[i] + maxProfitNaive(arr, start, i - 1) + maxProfitNaive(arr, j + 1, end);
				profit = max(profit, cur_profit);
			}
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

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int maxProfit = maxProfitNaive(arr, 0, n - 1);
	cout << maxProfit << endl;

	return 0;
}