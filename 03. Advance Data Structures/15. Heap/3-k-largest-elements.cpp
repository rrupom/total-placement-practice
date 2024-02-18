#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
}

void kLargestElementMinHeap(vector<int> v, int k) {
	// first build minheap of k elements
	priority_queue<int, vector<int> , greater<int>> pq;

	for (int i = 0; i < k; i++) {
		pq.push(v[i]);
	}

	for (int i = k; i < v.size(); i++) {
		if (pq.top() < v[i]) {
			pq.pop();
			pq.push(v[i]);
		}
	}

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
}

void kLargestElementMaxHeap(vector<int> v, int k) {
	priority_queue<int> pq;

	for (int i = 0; i < v.size(); i++) {
		pq.push(v[i]);
	}

	while (k--) {
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << endl;
}

void kLargestElementSorting(vector<int> v, int k) {
	sort(v.begin(), v.end());

	for (int i = v.size() - k; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
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

	kLargestElementSorting(v, k);
	kLargestElementMaxHeap(v, k);
	kLargestElementMinHeap(v, k);

	return 0;
}

/*
Time Complexity: Sorting : O(nlogn)
				 MaxHeap : O(n + klogn)
				 MinHeap : O(k + (n-k)logn)
Space Complexity: no extra space is need for this solution
*/

/*
input:
5
10 18 5 13 1
3
*/

/*
output:
10 13 18
18 13 10
10 13 18
*/