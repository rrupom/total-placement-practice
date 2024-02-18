/*
	Problem : Minimum Group Flips to Make Same. It is a binary array
	Idea to solve this problem in one traversal
	** Group Counts Differ by One:
	1 1 0 0 0 1 1 1 0 0 1 -> Count(1) - Count(0) = 1
	0 0 1 1 0 0 0 1 1 0 0 -> Count(0) - Count(1) = 1

	** Group Counts are same
	0 0 1 1 1 0 0 0 0 1 1 -> Count(1) = Count(0)
	1 1 0 0 0 1 1 1 1 0 0 -> Count(1) = Count(0)

	So we can print always the second group of numbers.
	As second group has two possibilities. Either same count with the first
	or differ by one from the first group
*/

#include<bits/stdc++.h>
using namespace std;

void printGroups(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1]) {
			if (arr[i] != arr[0]) {
				cout << "From " << i << " to ";
			} else {
				cout << i - 1 << endl;
			}
		}
	}

	// if the last element is itself forming a group
	if (arr[n - 1] != arr[0]) {
		cout << n - 1 << endl;
	}
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

	printGroups(arr, n);

	return 0;
}

