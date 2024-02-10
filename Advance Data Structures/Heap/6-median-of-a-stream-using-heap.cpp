/*
	Problem : A stream is given. At every point find the median of the stream
	I/P: {25,7,10,15,20}
	O/p: {25,16,10,12.5,15}
*/

#include<bits/stdc++.h>
using namespace std;

vector<double> findMediansUsingHeap(vector<int> v) {
	priority_queue<int> maxHeap; //contains lower half of element
	priority_queue<int, vector<int>, greater<int> > minHeap; //contains upper half of elements
	vector<double> ans;
	double median;

	// explicit handling of the first element
	maxHeap.push(v[0]);
	ans.push_back(maxHeap.top());

	for (int i = 1; i < v.size(); i++) {
		int element = v[i];
		// if maxHeap already contains extra element
		if (maxHeap.size() > minHeap.size()) {
			// this element need to push in the minHeap. but this has different condition
			if (element > maxHeap.top()) {
				minHeap.push(element);
			} else {
				// element need to be swaped
				minHeap.push(maxHeap.top());
				maxHeap.pop();
				maxHeap.push(element);
			}

			median = (maxHeap.top() + minHeap.top() * 1.0) / 2;
			ans.push_back(median);
		} else {
			if (element <= maxHeap.top()) {
				maxHeap.push(element);
			} else {
				minHeap.push(element);
				maxHeap.push(minHeap.top());
				minHeap.pop();
			}

			median = maxHeap.top();

			ans.push_back(median);
		}
	}

	return ans;
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

	vector<double> ans = findMediansUsingHeap(v);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}


	return 0;
}

/*
Time Complexity: O(nlogn)
Space Complexity:
*/

/*
input:
5
25 7 10 15 20
*/

/*
output:
25 16 10 12.5 15
*/