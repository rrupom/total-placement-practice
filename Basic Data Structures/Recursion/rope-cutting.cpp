#include<bits/stdc++.h>
using namespace std;

int rodCutting(int total, int a, int b, int c) {
	if (total < 0) return -1;
	if ( total == 0) return 0;

	int result = max(rodCutting(total - a, a, b, c), max(rodCutting(total - b, a, b, c), rodCutting(total - c, a, b, c)));

	if (result == -1) return -1;
	return result + 1;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int totalLenght, a, b, c; // totalLength is the total length of the rod. And a,b,c are the possible cuts

	cin >> totalLenght >> a >> b >> c;

	int ans = rodCutting(totalLenght, a, b, c);

	cout << ans << endl;

	return 0;
}