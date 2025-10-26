class Solution {
public:
    void helper(vector<string>& ans, int left, int right, string curr, int n) {
        if (curr.length() == 2 * n) {
            ans.push_back(curr);
            return;
        }
        if (left < n)
            helper(ans, left + 1, right, curr + '(', n);
        if (right < left)
            helper(ans, left, right + 1, curr + ')', n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(ans, 0, 0, "", n);
        return ans;
    }
};