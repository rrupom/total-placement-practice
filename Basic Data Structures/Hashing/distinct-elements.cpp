#include<bits/stdc++.h>
using namespace std;

int uniqueElement(int arr[], int n) {
	set<int> s;

	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}

	return s.size();
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;

	cout << "How many elements in the array : " << std::flush;;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "Number of unique elements in the array : " << uniqueElement(arr, n);

	return 0;
}