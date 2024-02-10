/*
	Problem : An array and k is given. Sort the array is such a way that
	an element at index i will be present between indexes i-k to i+n in the sorted array
*/

#include<bits/stdc++.h>
using namespace std;

void kSortedArrayWithSorting(vector<int> v, int k) {
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
}

void kSortedArrayWithMinHeap(int arr[], int n, int k) {
	int size;
	size = (n == k) ? k : k + 1;
	// create a min heap
	priority_queue<int, vector<int>, greater<int>> pq(arr, arr + size);

	int index = 0;

	for (int i = k + 1; i < n; i++) {
		arr[index++] = pq.top();
		pq.pop();
		pq.push(arr[i]);
	}

	while (pq.empty() == false) {
		arr[index++] = pq.top();
		pq.pop();
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
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

	int k;
	cin >> k;

	// k sort with sorting
	kSortedArrayWithSorting(v, k);

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> k;

	// sorting with min heap
	kSortedArrayWithMinHeap(arr, n, k);

	return 0;
}

/*
Time Complexity: O(klogk) + O((n-k)logk) + O(klogk)
Space Complexity:
*/

/*
input:
5
10 18 5 13 1
2
*/

/*
output:
1 5 10 13 18
5 10 1 13 18
*/