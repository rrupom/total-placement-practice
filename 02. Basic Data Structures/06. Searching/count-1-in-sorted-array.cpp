#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) cin >> arr[i];

	sort(arr, arr + n);

	int result = -1;

	int low = 0;
	int high = n - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == 1) {
			result = mid;
			high = mid - 1;
		} else if (arr[mid] >= 1) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}

	cout << "Result : " << result << endl;

	if (result == -1) cout << -1 << endl;
	else cout << n - result << endl;

	return 0;
}