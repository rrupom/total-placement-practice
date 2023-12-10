class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result;
        vector<pair<int, char>>vp;
        for (int i = 0; i < s.size(); i++) {
            vp.push_back(make_pair(indices[i], s[i]));
        }

        sort(vp.begin(), vp.end());

        for (int i = 0; i < vp.size(); i++) {
            result.push_back(vp[i].second);
        }

        return result;
    }
};