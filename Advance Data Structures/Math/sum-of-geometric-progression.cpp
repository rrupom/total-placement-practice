#include<bits/stdc++.h>
using namespace std;

bool isGeometricProgression(vector<int> v) {
	int difference;
	if (v.size() == 1) {
		cout << "It is a single number. Not a progression" << endl;
		return false;
	}
	if (v.size() >= 2) {
		difference = v[1] - v[0];
	}

	for (int i = 2; i < v.size(); i++) {
		if (v[i] - v[i - 1] != difference) return false;
	}

	return true;

}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	if (isGeometricProgression(v)) {
		int first = v[0];
		int last = first + (n - 1) * (v[1] - v[0]);
		int sum = ((first + last) / 2) * n;
		cout << "Summation is : " << sum << endl;
	}
	return 0;
}