#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int total = 0;
        int cnR = 0;
        int cnL = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') ++cnL;
            if (s[i] == 'R') ++cnR;
            if (cnR == cnL) ++total;
        }

        return total;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    Solution sol;
    cout << sol.balancedStringSplit(s);

    return 0;
}