/*
	Problem : An unsorted array is given. Find peak element of the array
	Peak Element: Peak element is an element which is not smaller than its neighbour
	Example: {5,10,20,15,7} => here 20 is the peak element. Because its neighbour
	10 and 15 both are not greater than 20
	{10,20,15,5,23,90,67} => either 20 or 90
	{80,70,60} => 80 because it's neighbours are nothing ans 70. It is not smaller than these
	Write a function which will return one of the peak element
*/

#include<bits/stdc++.h>
using namespace std;

// it is O(n) complexity
int getPeakNaive(int arr[], int n) {
	if (n == 1) return arr[0];
	if (arr[0] >= arr[1]) return arr[0]; // first element
	if (arr[n - 1] >= arr[n - 2]) return arr[n - 1]; // last element

	for (int i = 0; i < n - 1; i++) {
		if (arr[i] >= arr[i - 1] and arr[i] >= arr[i + 1]) return arr[i];
	}
}

// We can reduce the complexity
int getPeakEff(int arr[], int n) {
	int low = 0;
	int high = n - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// either mid element is greater from both left and right element. then it will be the
		// peak element. Else if left element is greater then peak element is resides in left half
		// or peak element resides in right half

		if ((mid == 0 or arr[mid] >= arr[mid - 1]) and (mid == n - 1 or arr[mid] >= arr[mid + 1])) {
			return arr[mid];
		} else if (mid > 0 and arr[mid - 1] > arr[mid]) {
			high = mid - 1; // left hald
		} else {
			low = mid + 1;
		}
	}

	return -1;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans = getPeakNaive(arr, n);
	cout << ans << endl;

	ans = getPeakEff(arr, n);
	cout << ans << endl;

	return 0;
}