#include<bits/stdc++.h>
using namespace std;

inline int square(int n) {
	return n * n;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << square(10) << endl;
	// compiler will simple put the function body at this line. this will minimize the function call
	// overhead


	return 0;
}