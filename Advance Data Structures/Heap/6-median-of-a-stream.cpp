/*
	Problem : A stream is given. At every point find the median of the stream
	I/P: {25,7,10,15,20}
	O/p: {25,16,10,12.5,15}
*/

#include<bits/stdc++.h>
using namespace std;

vector<double> findMedians(vector<int> v) {
	vector<double> res;
	vector<int> temp;

	for (int i = 0; i < v.size(); i++) {
		temp.push_back(v[i]);
		sort(temp.begin(), temp.end());
		double ans;
		int sz = temp.size();
		if (sz % 2 != 0) {
			ans = temp[sz / 2];
		} else {
			ans = (temp[sz / 2] + temp[(sz - 1) / 2] * 1.0) / 2;
		}

		res.push_back(ans);
	}

	return res;
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

	vector<int> v;
	takeVectorInput(v);

	vector<double> ans = findMedians(v);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	return 0;
}

/*
input:
5
25 7 10 15 20
*/

/*
output:
25 16 10 12.5 15
*/