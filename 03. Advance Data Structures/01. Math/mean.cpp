#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x;
	vector<int> v;
	cin >> n;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
		sum += x;
	}

	int mean = sum / n;

	cout << "Mean is : " << mean << endl;

	return 0;
}