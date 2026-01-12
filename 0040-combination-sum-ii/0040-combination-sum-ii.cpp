class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> subset;
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, ans, subset, 0, 0);
        return ans;
    }
    void helper(vector<int>& candidates, int target, vector<vector<int>>& ans,
                vector<int>& subset, int sum, int idx) {
        if (sum == target) {
            ans.push_back(subset);
            return;
        }
        if (sum > target) {
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            if (i > idx && candidates[i - 1] == candidates[i])
                continue;
            subset.push_back(candidates[i]);
            helper(candidates, target, ans, subset, sum + candidates[i],
                   i + 1);
            subset.pop_back();
        }
    }
};