class Solution {
public:
    int findMin(vector<int>& nums) {
        int small = INT_MAX;
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            small=min(small,nums[mid]);
            if(!(nums[mid]<=nums[high]))
                low=mid+1;
            else
                high=mid-1;
        }
        return small;
    }
};