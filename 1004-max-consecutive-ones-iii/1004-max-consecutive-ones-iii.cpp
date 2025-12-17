class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int l = 0, r = 0;
        int zeroes = 0;
        while (r < nums.size()) {
            if (nums[r] == 0)
                zeroes++;
            if (zeroes > k) {
                if (nums[l] == 0) {
                    zeroes--;
                }
                l++;
            }
            count = max(count, r - l + 1);
            r++;
        }
        return count;
    }
};