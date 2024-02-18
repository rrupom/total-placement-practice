#include<bits/stdc++.h>
using namespace std;

void getAdditionAndMultiplication(int x, int y, int *add, int *mul) {
	*add = x + y;
	*mul = x * y;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x = 10, y = 20, addition, multiplication;
	getAdditionAndMultiplication(x, y, &addition, &multiplication);

	cout << addition << " " << multiplication << endl;


	return 0;
}