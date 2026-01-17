class Solution {
public:
    void helper(vector<int>& candidates, int target, vector<vector<int>>& ans,
                vector<int>& temp, int sum, int idx) {
        if (sum == target) {
            ans.push_back(temp);
            return;
        }
        if (sum > target || idx >= candidates.size())
            return;
        for (int i = idx; i < candidates.size(); i++) {
            if (i > idx && candidates[i - 1] == candidates[i])
                continue;
            temp.push_back(candidates[i]);
            helper(candidates, target, ans, temp, sum + candidates[i], i + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        helper(candidates, target, ans, temp, 0, 0);
        return ans;
    }
};