class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> v(256, 0);
            for (int j = i; j < s.size(); j++) {
                if (v[s[j]] != 0) {
                    break;
                }
                v[s[j]]++;
                maxi = max(maxi, j - i + 1);
            }
        }
        return maxi;
    }
};