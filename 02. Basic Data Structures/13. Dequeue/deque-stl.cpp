#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	/* deque implementaton in c++ ensures some extra facilities
	   - allow random access
	   - allow any number of operation in O(1) time
	*/

	deque<int> dq = {10, 20, 5, 30};
	auto it = dq.begin();
	it = dq.insert(it, 7); // 7(it) 10 20 5 30
	it = dq.insert(it, 2, 3); // 3 3(it) 7 10 20 5 30
	it = dq.erase(it + 1); // 3 3 10 20 5 30
	cout << (*it) << endl; // 10

	dq.insert(it, 20);
	dq.push_front(5);
	dq.push_back(50);
	dq.pop_back();
	dq.pop_front();

	for (int i = 0; i < dq.size(); i++) {
		cout << dq[i] << " "; // dq[i] = 5 will be direct effect on dq
	}

	for (auto x : dq) {
		cout << x << " ";
	}

	cout << endl;

	cout << dq.front() << " " << dq.back() << endl;

	return 0;
}