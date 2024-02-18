/*
	avoiding copy of large objects during function calls
*/

#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void Print(vector<int> v) {
	int count = 0;
	for (int i = 0; i < v.size(); i++) {
		// cout << v[i] << " ";
		count++;
	}

	cout << endl;
}

void Print2(vector<int> &v) {
	int count = 0;
	for (int i = 0; i < v.size(); i++) {
		// cout << v[i] << " ";
		count++;
	}

	cout << endl;
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

	auto start = high_resolution_clock::now();

	Print(v);

	auto stop = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>(stop - start);
	cout << "time taken without reference is : " << duration.count() << " microseconds" << endl;

	auto start2 = high_resolution_clock::now();
	Print2(v);
	auto stop2 = high_resolution_clock::now();

	auto duration2 = duration_cast<microseconds>(stop2 - start2);
	cout << "time taken without reference is : " << duration2.count() << " microseconds" << endl;



	for (int i = 0; i < 1000; i++) {
		int x = 0;
	}


	return 0;
}