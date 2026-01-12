class Solution {
public:
    void helper(vector<vector<int>>& ans, vector<int>& curr, int idx, int sum,
                vector<int>& candidates, int target) {
        if (target == sum) {
            ans.push_back(curr);
            return;
        }
        if (idx >= candidates.size() || sum > target)
            return;
        curr.push_back(candidates[idx]);
        helper(ans, curr, idx, sum + candidates[idx], candidates, target);
        curr.pop_back();
        helper(ans, curr, idx + 1, sum, candidates, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(ans, curr, 0, 0, candidates, target);
        return ans;
    }
};