#include<bits/stdc++.h>
using namespace std;

double fractionalKnapsack(vector<pair<double, pair<int, int>>> vp, int weight) {
	double total = 0;

	for (int i = 0; i < vp.size(); i++) {
		if (vp[i].second.first <= weight) {
			total += vp[i].second.second;
			weight -= vp[i].second.first;
		} else {
			total += (vp[i].first * weight);
			weight = 0;
		}
	}

	return total;
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

	vector<pair<double, pair<int, int>>> vp;

	int n, weight, value;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> weight >> value;
		vp.push_back({value * 1.0 / weight, {weight, value}});
	}

	int w;
	cin >> w;

	sort(vp.begin(), vp.end());
	reverse(vp.begin(), vp.end());

	cout << "Maximum value = " << fractionalKnapsack(vp, w);


	return 0;
}

/*
input:
3
50 600
20 500
30 400
70
*/

/*
output:
Maximum value = 1140
*/