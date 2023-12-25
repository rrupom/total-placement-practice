/*
	Problem : Given an array of integers. Find if it has an equilibrium point. Corner elements
	can also be equilibrium point
	{3,4,8,-9,20,6} => 20 is equilibrium point
	{4,2,-2} => 4 is equilibrium point (corner element)
	{4,2,2} => no equilibrium point

	Technique: First calculate the total sum of the array
	then for every point check if the leftsum == rightsum
*/

#include<bits/stdc++.h>
using namespace std;

bool hasEquilibriumPoint(int arr[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	int leftSum = 0;

	for (int i = 0; i < n; i++) {
		if (leftSum == total - arr[i]) return true;
		else {
			leftSum += arr[i];
			total -= arr[i];
		}
	}

	return false;
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

	bool ans = hasEquilibriumPoint(arr, n);
	if (ans) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}