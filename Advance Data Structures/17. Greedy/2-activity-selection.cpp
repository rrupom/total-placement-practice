#include<bits/stdc++.h>
using namespace std;

int selectActivity(vector<pair<int, int>> activity) {
	int count = 1;
	int lastEnd = activity[0].second;

	for (int i = 1; i < activity.size(); i++) {
		if (activity[i].first >= lastEnd) {
			count++;
			lastEnd = activity[i].second;
		}
	}

	return count;
}

bool myCmp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
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

	vector<pair<int, int>> activity;

	int n, start, end;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> start >> end;
		if (start > end) {
			swap(start, end);
		}

		activity.push_back({start, end});
	}

	// sort on end time

	sort(activity.begin(), activity.end(), myCmp);

	cout << selectActivity(activity) << endl;


	return 0;
}

/* Case -1
input:
4
2 3
1 4
5 8
6 10
*/

/*
output:
2
*/

/* Case 2
input:
4
1 3
2 4
3 8
10 11
*/

/*
output:
3
*/