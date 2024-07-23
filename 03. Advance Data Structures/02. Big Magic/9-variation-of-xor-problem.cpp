/*
	Problem : Given an array of n number that has values in range [1...n+1].
	Every no appears exactly once. Hence one no number is missing. Find the missing number
*/

#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int number) {
	int sumInRange = 0 ;
	for (int i = 1; i <= number; i++) {
		sumInRange ^= i;
	}

	int sumInArray = 0;

	for (int i = 0; i < number - 1; i++) {
		sumInArray ^= arr[i];
	}

	return sumInRange ^ sumInArray;
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

	int number;
	cin >> number;

	int arr[number - 1];

	for (int i = 0; i < number - 1; i++) {
		cin >> arr[i];
	}

	int missingNumber = findMissingNumber(arr, number);

	cout << "Missing number is = " << missingNumber << endl;

	cout << ( 3 & ~(2) ) << endl;


	return 0;
}