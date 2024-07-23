/*
	Problem : Given a fixed array and multiple queries of following types
	on the array. How to efficientyly proform these queries

	Solution: prefix sum
*/

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int numbers[n];

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	// buiding prefix_sum array
	int prefix[n];
	prefix[0] = numbers[0];
	for (int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + numbers[i];
	}

	int numOfQueries;
	cin >> numOfQueries;

	while (numOfQueries--) {
		int left, right;
		cin >> left >> right;
		if (left == 0) {
			cout << "Answer is = " << prefix[right] << endl;
		} else {
			cout << "Answer is = " << prefix[right] - prefix[left - 1] << endl;
		}
	}


	return 0;
}

/*
input:
7
2 8 3 9 6 5 4
3
0 2
1 3
2 6
*/

/*
output:
Answer is = 13
Answer is = 20
Answer is = 27

*/

