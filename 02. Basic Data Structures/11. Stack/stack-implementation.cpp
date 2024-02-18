#include<bits/stdc++.h>
using namespace std;

class MyStack {
private:
	int arr[1000];
	int top;
public:
	MyStack() {
		top = -1;
	}
	int pop();
	void push(int);
};

void MyStack :: push(int x) {
	arr[++top] = x;
}

int MyStack :: pop() {
	if (top == -1) {
		return -1;
	}
	return arr[top--];
}



int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	MyStack st;
	st.push(100);
	st.push(200);

	cout << st.pop();

	return 0;
}