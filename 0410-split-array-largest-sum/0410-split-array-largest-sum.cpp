class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int sub = 1;
            int count = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (count + nums[i] <= mid)
                    count += nums[i];
                else {
                    count = nums[i];
                    sub++;
                }
            }
            if (sub <= k)
                high = mid - 1;
            else 
                low = mid + 1;
        }
        return low;
    }
};