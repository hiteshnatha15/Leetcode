class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0)
            return 0;
        unordered_set<int> ans;
        int maxi = INT_MIN;
        int left = 0;
        int right = 0;
        for (; right < s.size(); right++) {
            if (ans.find(s[right]) != ans.end()) {
                while (left < right && ans.find(s[right]) != ans.end()) {
                    ans.erase(s[left]);
                    left++;
                }
            }
            ans.insert(s[right]);
            maxi = max(maxi, right - left + 1);
        }
        return maxi;
    }
};