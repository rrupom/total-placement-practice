#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int arr[] = {10, 20, 5, 8, 3};

	int n = sizeof(arr) / sizeof(arr[0]);
	cout << n << endl; // size of the array

	// maximum element in the array

	int maxelement = *max_element(arr, arr + n);
	cout << maxelement << endl;




	return 0;
}