#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Node *head = new Node(10);
	Node *temp = new Node(20);
	Node *temp2 = new Node(30);

	head ->next = temp;
	temp->next = temp2;


	return 0;
}