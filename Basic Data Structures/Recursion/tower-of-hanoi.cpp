#include<bits/stdc++.h>
using namespace std;

void toh(int number, char source, char intermidiate, char destination) {
	if (number == 1) {
		cout << "Move 1 from " << source << " to " << destination << endl;
		return;
	}
	toh(number - 1, source, destination, intermidiate);
	cout << "Move " << number << " from " << source << " to " << destination << endl;
	toh(number - 1, intermidiate, source, destination);
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << "Enter the number of disks : " << endl;;
	int number;
	cin >> number;
	char source, intermidiate, destination;
	cin >> source >> intermidiate >> destination;

	toh(number, source, intermidiate, destination);

	return 0;
}