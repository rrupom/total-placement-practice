#include<bits/stdc++.h>
using namespace std;

class MyDS {

	deque<int> dq;

public:

	void insertMin(int x) {
		dq.push_front(x);
	}

	void insertMax(int x) {
		dq.push_back(x);
	}

	int getMin() {
		return dq.front();
	}

	int getMax() {
		return dq.back();
	}

	int extractMin() {
		return dq.pop_front();
	}

	int extractMax() {
		return dq.pop_back();
	}


};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);



	return 0;
}