#include<bits/stdc++.h>
using namespace std;

void permute(string str, int l, int r) {
	if (l == r) {
		cout << str << endl;
		return;
	} else {
		for (int i = l; i <= r; i++) {
			swap(str[i], str[l]);
			permute(str, l + 1, r);
			swap(str[i], str[l]);
		}
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

	string str;
	cin >> str;

	permute(str, 0, str.size() - 1);


	return 0;
}

/*
input:
abc
*/

/*
output:
abc
acb
bac
bca
cba
cab
*/