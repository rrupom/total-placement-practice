#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	// max heap
	// priority_queue<int> pq;

	// min heap
	// priority_queue<int, vector<int>, greater<int>>pq;

	// priority_queue from array
	int arr[] = {10, 5, 15};
	priority_queue<int> pq(arr, arr + 3);

	pq.push(10);
	pq.push(15);
	pq.push(5);

	cout << pq.size() << endl;
	cout << pq.top() << endl;
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}


	return 0;
}