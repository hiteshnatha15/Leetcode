class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        helper(ans, subset, nums, 0);
        return ans;
    }
    void helper(vector<vector<int>>& ans, vector<int>& subset,
                vector<int>& nums, int idx) {
        if (idx == nums.size()) {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[idx]);
        helper(ans, subset, nums, idx + 1);
        subset.pop_back();
        helper(ans, subset, nums, idx + 1);
    }
};