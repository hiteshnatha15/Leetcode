class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            int k = nums.size()-1;
            if (i > 0 && nums[i - 1] == nums[i])
                continue;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                    j++;
                else if (sum > 0)
                    k--;
                else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j - 1] == nums[j])
                        j++;
                    while (j < k && nums[k + 1] == nums[k])
                        k--;
                }
            }
        }
        return ans;
    }
};