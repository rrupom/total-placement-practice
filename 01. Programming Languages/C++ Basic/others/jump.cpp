#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	if (n % 2 == 0) {
		goto label1;
	} else {
		goto label2;
	}

label1:
	cout << "This number is even" << endl;
	return 0;
label2:
	cout << "This number is odd" << endl;

	return 0;
}