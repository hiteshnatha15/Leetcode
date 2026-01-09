class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        sort(nums.begin(), nums.end());
        helper(nums, ans, subset, 0);
        return ans;
    }
    void helper(vector<int>& nums, vector<vector<int>>& ans,
                vector<int>& subset, int idx) {
        ans.push_back(subset);
        for (int i = idx; i < nums.size(); i++) {
            if (i > idx && nums[i - 1] == nums[i])
                continue;
            subset.push_back(nums[i]);
            helper(nums, ans, subset, i + 1);
            subset.pop_back();
        }
    }
};