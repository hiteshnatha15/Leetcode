class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256, -1);
        int l = 0;
        int r = 0;
        int maxi = 0;
        while (r < s.length()) {
            if (v[s[r]] != -1)
                l = max(l, v[s[r]] + 1);
            v[s[r]] = r;
            maxi = max(maxi, r - l + 1);
            r++;
        }
        return maxi;
    }
};