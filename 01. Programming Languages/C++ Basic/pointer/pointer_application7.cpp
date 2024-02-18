#include<bits/stdc++.h>
using namespace std;

void accessArray(int *ptr, int size) {
	for (int i = 0; i < size; i++) {
		cout << ptr[i] << " ";
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int arr[] = {20, 30, 40, 50};

	int *ptr = arr;

	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		cout << *(ptr + i) << " ";
	}

	cout << endl;

	accessArray(arr, size);


	return 0;
}