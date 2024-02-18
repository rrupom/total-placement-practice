#include<bits/stdc++.h>
using namespace std;

// saves cpu power and memory
void Process(vector<int> &v) {
	for (int i = 0; i < v.size(); i++) {
		v[i] = v[i] + 10;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> v;

	for (int i = 0; i < 1000; i++) {
		v.push_back(i + 1);
	}

	Process(v);

	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}


	return 0;
}