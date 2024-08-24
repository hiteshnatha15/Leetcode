class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];
        for (int i = 0; i < min(strs[0].size(), strs[strs.size() - 1].size());
             i++) {
            if (first[i] != last[i])
                return ans;
            ans += first[i];
        }
        return ans;
    }
};