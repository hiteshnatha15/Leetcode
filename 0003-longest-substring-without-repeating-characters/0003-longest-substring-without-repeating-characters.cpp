class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256, -1);
        int ans = 0;
        int left = 0;
        int right = 0;
        while (right < s.size()) {
            if (v[s[right]] != -1)
                left = max(left, v[s[right]] + 1);
            ans = max(ans, right - left + 1);
            v[s[right++]] = right;
        }
        return ans;
    }
};