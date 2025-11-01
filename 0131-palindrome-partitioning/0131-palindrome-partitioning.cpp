class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        helper(s, temp, ans, 0);
        return ans;
    }
    void helper(string s, vector<string>& temp, vector<vector<string>>& ans,
                int idx) {
        if (idx == s.length()) {
            ans.push_back(temp);
            return;
        }
        for (int i = idx; i < s.length(); i++) {
            if (isPalindrome(s, idx, i)) {
                temp.push_back(s.substr(idx, i - idx + 1));
                helper(s, temp, ans, i + 1);
                temp.pop_back();
            }
        }
    }
    bool isPalindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--])
                return false;
        }
        return true;
    }
};