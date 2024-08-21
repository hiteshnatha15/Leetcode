class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(nums[i], ans - 1);
            if (i + ans == n - 1)
                return true;
            if (ans <= 0)
                return false;
        }
        return true;
    }
};