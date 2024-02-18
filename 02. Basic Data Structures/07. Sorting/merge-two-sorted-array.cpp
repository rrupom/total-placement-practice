#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int al;
	cin >> al;
	int arr[al];
	for (int i = 0; i < al; i++) cin >> arr[i];
	int bl;
	cin >> bl;
	int brr[bl];
	for (int i = 0; i < bl; i++) cin >> brr[i];
	int crr[al + bl];

	int left = 0;
	int right = 0;
	while (left < al and right < bl) {
		if (arr[left] <= brr[right]) {
			crr[left + right] = arr[left++];
		} else {
			crr[left + right] = brr[right++];
		}
	}
	while (left < al) {
		crr[left + right] = arr[left++];
	}
	while (right < bl) {
		crr[left + right] = brr[right++];
	}

	for (int i = 0; i < al + bl; i++) {
		cout << crr[i] << " ";
	}
	return 0;
}